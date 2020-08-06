#include <cstdlib>
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <thread>
#include <future>

#include "safe_queue.hpp"

class Writer
{
private:
    ThreadSafeQueue<std::string> lines;

public:
    Writer() {}
    Writer(ThreadSafeQueue<std::string> lines_temp){
        //copy param q into intern here
    };

    //Non-Blocking function running asynchronously
    void from_files()
    {
        std::ifstream in_1("read_1.txt");
        std::string content;
        content.assign((std::istreambuf_iterator<char>(in_1)),
                       (std::istreambuf_iterator<char>()));
        std::cout << content;


        std::ifstream in_2("read_2.txt");
        std::string more;
        more.assign((std::istreambuf_iterator<char>(in_2)),
                       (std::istreambuf_iterator<char>()));
        std::cout << more;
    }

    //This is the blocking function that write to file
    //void to_file()
    //{
    ////code to write to file, async call
    //std::ofstream out("output.txt", std::ofstream::app);
    ////add to file from queue as long as it is not empty
    //while (!out)
    //{
    //out << lines.front() << std::endl;
    //lines.pop();
    //}
    //}
    //};
};

int main()
{
    Writer w;
    std::cout << "Reading from input files..." << std::endl;
    w.from_files();

    //std::cout << "Writing to the output big file..." << std::endl;
    //w.to_file();

    return EXIT_SUCCESS;
}
