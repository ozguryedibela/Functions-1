#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	string line;
	ifstream source("source.txt");
	ofstream destination("destination.txt");

	if (source.is_open() & destination.is_open()){ 
		
		while (getline(source, line)) {

			destination << line << endl;
		
		}

		cout << "Transaction successfully completed.";
	}
	else {
		cout << "Transaction failed.";
	}
	source.close();
	destination.close();
}
