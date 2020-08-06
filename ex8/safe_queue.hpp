#include <queue>
#include <unistd.h>

template <typename T>
class ThreadSafeQueue
{
public:
    ThreadSafeQueue();
    void push_back(const T &value);
    bool empty() const;
    unsigned int size() const;
    bool try_pop_front(T &popped_val);
    bool wait_pop_front(T &popped_val);

private:
    std::queue<T> m_queue;
    mutable std::mutex m_mutex;
    std::condition_variable m_condition;
};

template <typename T>
ThreadSafeQueue<T>::ThreadSafeQueue()
{
    while (!m_queue.empty()){
        m_queue.pop();
    }
}

template <typename T>
void ThreadSafeQueue<T>::push_back(const T &value)
{
    //this lock needs to be instantiated but also unlocked manually
    std::unique_lock<std::mutex> lock(m_mutex);
    m_queue.push_back(value);
    // unlocking to open access again
    lock.unlock();
    m_condition.notify_one();
}

template <typename T>
bool ThreadSafeQueue<T>::empty() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_queue.empty();
    //unlock is automatically called when destructor takes place at end of this function
}

template <typename T>
bool ThreadSafeQueue<T>::try_pop_front(T &popped_val)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_queue.empty())
    {
        return false;
    }

    popped_val = m_queue.front();
    m_queue.pop_front();
    return true;
}

template <typename T>
bool ThreadSafeQueue<T>::wait_pop_front(T &popped_val)
{
    std::unique_lock<std::mutex> lock(m_mutex);
    while (m_queue.empty())
    {
        m_condition.wait(lock);
    }

    popped_val = m_queue.front();
    m_queue.pop_front();
}

template <typename T>
unsigned int ThreadSafeQueue<T>::size() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_queue.size();
}
