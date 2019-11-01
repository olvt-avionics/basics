#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
    string Text;
    string error;
    error = "file not opened";
    ifstream inFile;
    inFile.open("input_file.txt");
    if (!inFile){
        cout << error << endl;
    }
    
    if (inFile.is_open()) {
    while (!inFile.eof()) {
    
        inFile >> Text;
        cout << Text << endl;
    }
    }
    inFile.close();
    return 0;
}