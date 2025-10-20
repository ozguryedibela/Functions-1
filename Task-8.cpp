#include<iostream>
#include<fstream>

using namespace std;

int main() {
	int number;
	int sum = 0;
	int count = 0;
	ifstream file("numbers.txt");

	if (file.is_open()) {
		while (file >> number) {
			sum += number;
			count++;
		}
		cout << "File successfully read." << endl << "Average of the numbers is: " << sum / count;
	}
	else {
		cout << "Failed to read the file.";
	}
	file.close();
}
