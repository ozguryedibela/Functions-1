#include<iostream>
#include<fstream>

using namespace std;

int main() {

	char ch;
	int charCount = 0;
	
	ifstream file("sample.txt");
	
	if (file.is_open()) {

		cout << "Starting to read the file." << endl;
		
		while (file.get(ch)) {
		
			charCount++;
		
		}
		file.close();
		cout << charCount;
	}
	else {
		cout << "Failed to read the file.";
	}
}
