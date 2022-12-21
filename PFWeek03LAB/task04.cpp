#include <iostream>
using namespace std;

main()
{
	float length;
	float width;
	float area;
	cout << "Enter Width of the Rectangle=> ";
	cin >> width;
	cout << "Enter Length of the Rectangle=> ";
	cin >> length;
	area = length * width;
	cout << "Area of the Rectangle is=> " << area;
}