#include <iostream>
using namespace std;

main()
{
	float matric, intermediate, ecat;
	float matric_percent, inter_percent, ecat_percent;
	float ecat_weight, inter_weight, matric_weight;
	float aggregate;
	string name;
	
	cout << "Enter Your Name=> ";
	cin >> name;
	cout << "Enter Your Matric Marks=> ";
	cin >> matric;
	cout << "Enter Your Inter Marks=> "; 
	cin >> intermediate;
	cout << "Enter Your ECAT Marks=> ";
	cin >> ecat;
	
	matric_percent = matric/1100 * 100;
	inter_percent = intermediate/550 * 100;
	ecat_percent = ecat/400 * 100;
	
	ecat_weight = ecat_percent * 0.5;
	inter_weight = inter_percent * 0.4;
	matric_weight = matric_percent * 0.1;
	
	aggregate = ecat_weight + inter_weight + matric_weight;

	cout << "Your UET Aggregate is=> " << aggregate;
}
