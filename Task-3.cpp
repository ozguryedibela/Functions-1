#include<iostream>
#include<fstream>

using namespace std;

int main() {
	
	int arr[5] = { 1,5,7,8,6 };

	ofstream file("squares.txt");

	if (file.is_open()) {
		
		cout << "File created.";
		
		for (int i : arr) {

			file << i * i << endl;
		}
		file.close();
	}

	else {
		cout << "Failed to create the file.";
	}
}
