#include<iostream>
#include<fstream>

using namespace std;

void areaCalculating () {
	
	double width, height;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	cout << "Enter the height of the rectangle: ";
	cin >> height;

	double area = width * height / 2;
	ofstream file("rectangle_area.txt");

	if (file.is_open()) {
	
		cout << "File created.";
		file << area;
		file.close();

	}
}

int main() {
	
	areaCalculating();
}
