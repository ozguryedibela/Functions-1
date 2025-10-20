#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	string name;

	cout << "Please enter the name of the file: ";
	cin >> name;

	ofstream file(name + ".txt");

	if (file.is_open()) {
		cout << "File created.";
		file << "Hello World";
		file.close();
	}
	else {
		cout << "Failed to create the file.";
	}

}
