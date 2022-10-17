//============================================================================
// Name        : Week4_File1_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const string path = "input.txt";
	/*ofstream output(path);
	output << "Keep calm\n" << "and\n" << "learn C++\n";
	output.close();*/
	ifstream input(path);
	if (input) {
		string line;
		while (getline(input, line)) {
			cout << line << endl;
		}
	}
	//input.close();
	return 0;
}
