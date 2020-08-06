#include <cstdlib> 
#include <iostream>
#include <fstream> 
#include <string>
#include <queue>

class Writer {
    private:
        std::queue<std::string> intern;
    public:
        Writer(){}
        Writer(std::queue<std::string>& q){
          //copy param q into intern here  
        }
        void add(std::string str){
            intern.push(str);
        }
        void to_file(){
        }
        void to_console(){
            while (!intern.empty()){
                std::cout << intern.front() << "--";
                intern.pop();
            }
        }
};

int main(int argc, char *argv[]){
    Writer w;
    std::cout << "Type lines delimeted by pressing enter. End program by typing just 'e' then enter." << std::endl;
    std::string s;
    bool run = true;
    while(run){
        getline(std::cin,s);
        if(s == "e"){
            run = false;
        }
        else {
           w.add(s); 
           std::cout << "Added " << s << " to queue" <<std::endl;
        }
    }
    w.to_console();
    return EXIT_SUCCESS;
}
