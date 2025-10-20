#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void checker(string filename, string target) {
	
	string word;
	int wordCount = 0;
	ifstream file(filename + ".txt");
	
	if (file.is_open()) {
	
		while (file >> word) {
		
			if (word == target) {
			
				wordCount++;
			}
		}
		cout << "File successfully scanned." << endl << target << " word count is: " << wordCount;
	}
	else {
		"Failed to scan the file.";
	}
	file.close();
}

int main() {
	
	string target = "hello";
	string filename = "textfile";

	checker(filename, target);

}
