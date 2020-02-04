# Basics [How to program 101]

Each one of the exercises in this report will show you what you need to do to write a good basic code. I do not expect you to know how to write code at the start, so this will be a good refresher for those who already know how to write code. If you are more advanced, then I will point out more ways to optimize your code, so please do try to make these exercises as efficient as possible from a computational standpoint.

## ex0 [branches]:

To start each of you will have to create a branch with a hello world program, written in C. within the ex0. Then you need to actually push the branch to the origin.

Resources:
 - [Git Flow](https://www.atlassian.com/git/tutorials/comparing-workflows/gitflow-workflow)
 - [Git Branches](https://git-scm.com/book/en/v1/Git-Branching-What-a-Branch-Is)
## ex1 [How to Input and Output]:

ex1 is an exercise to make you use input-output streams. Please take the input file and output the text and save it to the git repository. It must not take more than a second to run your program.

Resources:

- [Input Output Streams Wikipeiada](<https://en.wikipedia.org/wiki/Input/output_(C%2B%2B)>)
- [CS Lecture On IO Streams](https://courses.cs.vt.edu/cs1044/Notes/C04.IO.pdf)

## ex2 [How to Performance]:

preface: You will be using a microcontroller sending and receiving values, the performance must be good and we need a way to measure it. This is created to show you what the performance looks like for a normal C program.

ex2 is an exercise that is testing your ability to check the performance of your programs. Take the program that you have from ex1 and perform performance tuning. Choose a tool to use to check the performance of your program and write a paragraph about your choices and why you made it.

Resources:

- [Wikipedia Performance Testing](https://en.wikipedia.org/wiki/Software_performance_testing)

## ex3 [Memory Issues]:

preface: On embedded devices, you have a finite amount of memory. Keeping down the memory usage is important, and this exercise is made to show you how to use memory.

ex3 is an exercise to make you look at memory usage. Choose a tool to use to check the performance of your program and write a paragraph about your choices and why you made it.

Resources:

- [How to Use GDB to Look at Memeory](https://sourceware.org/gdb/onlinedocs/gdb/Memory.html)
- [GDB looking at Data](ftp://ftp.gnu.org/old-gnu/Manuals/gdb/html_chapter/gdb_9.html)

Resources:
## ex4 [How to use Coding A Style-Guide]:

Please read: [Google Style Guide](https://developers.google.com/style) to make sure that you read through at least [Google Style Guide](https://developers.google.com/style/highlights) and [Google API Reference Comments](https://developers.google.com/style/api-reference-comments) before continuing on to the next exercise. The point of this exercise is to.

## ex5 [Testing Code]:

Unit testing code is imperative to the work that we do, for if we messed up people cod die. Try looking for a C based unit testing suite and try it out. cUnit, GNU Auto unit, and Unity.

## ex6 [Queues]:

Please write a C++ application that uses ["queues"](https://en.cppreference.com/w/cpp/container/queue) to send data from one part of the application to another for adding and then writing this data to a file. An example of something similar to what I am looking for is bellow.


```
int main(){
    std::queue Q; /* Queue For storing values to transfer between parts of code */
    int i = 0; /* A index that is used as data for the queue. */
    int data = 0; /* a data varible that is used to store values that come from the queue */

    while( /* Some condition */){
        Q.push(i);
        i++;
    }

    while( /* Some other condition */){
        data = Q.front();
        /*Write Data to File*/
        Q.pop();
    }

    return 0;
}
```

## ex7 [Blocking and Non-Blockin]:

There are two different types of code blocking and non-blocking code. Please, do research on the difference between blocking and non-blocking code. This is technically tied into the previous exercise in the way that non-blocking methods are usually used within multithreaded applications which will be gone over within the exercise next week. Write a couple of sentences about the difference between a blocking and non-blocking function.

### Resources:
 * [example of "research"](https://stackoverflow.com/questions/34119315/non-blocking-programming-in-c-for-beginner)
 * ["Blocking and Non Blocking Function Calls"](https://saimulticorecomputing.wordpress.com/2014/06/25/blocking-and-non-blocking-function-calls/)

## ex8 [Multithreading]:

Multithreading applications is a way to allow you to do multiple things at the same time. This is one of the fundamental parts of modern computing and allows us to better utilize our computers.to the fullest extent. With multithreading comes the issue of data races, transaction management issues, and other issues.

Within this exercise, you will be exploring the different issues that occur due to concurrency (multithreading) environment. You will need to open a file concurrently and write from two separate threads. Keep in mind this will need you to handle the issues.

Please be sure to write this application in C++ it will save you a lot of time and effort.

Write a c++ application that sends data over queues to be writen to files. There should be two, or more, threads for this application. One thread should be making and sending data to the queue in a non-blocking manner, and the other thread should be reading data from the queue and writing data in a blocking manner.

## ex9 [What is an RTOS]:
## ex10 [Setting up FreeRTOS Simulator]:
## ex11 [What is an ISR]:
## ex12 [Processing Data]:
