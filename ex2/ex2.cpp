// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

int main()
{
	std::chrono::time_point<std::chrono::steady_clock> chronostart, chronoend;
	chronostart = std::chrono::steady_clock::now();

	std::string Text;
	std::string error;
	error = "file not opened";
	std::ifstream inFile;
	inFile.open("input_file.txt");
	if (!inFile) {
		std::cout << error << std::endl;
	}

	if (inFile.is_open()) {
		while (!inFile.eof()) {

			inFile >> Text;
			std::cout << Text << std::endl;
		}
	}
	inFile.close();

	chronoend = std::chrono::steady_clock::now();
	std::chrono::duration<double> full_time = chronoend - chronostart;
	std::cout << "Total time required = " << full_time.count() << " seconds " << std::endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
