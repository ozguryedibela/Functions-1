#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	
	string firstN, lastN;
	cout << "Enter your first name: ";
	cin >> firstN;
	cout << "Enter your last name: ";
	cin >> lastN;

	ofstream file("names.log");

	if (file.is_open()) {
		
		cout << "File created.";
		file << firstN << endl << lastN;
		file.close();

	}

	else {
		cout << "Failed to create the file.";
	}
}
