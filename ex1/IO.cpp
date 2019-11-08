#include <iostream>
#include <fstream>
using namespace std; 

string value;

int main(void) 
{ 
    ifstream inFile;
    inFile.open("input_file.txt");
    if(!inFile.is_open()){
        cout << "file cannot open";
    }else{
        while(!inFile.eof()){
            inFile >> value;
            cout << value << "\t";
        }
    }
} 
