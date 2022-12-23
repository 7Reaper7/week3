#include <iostream>
using namespace std;
main()
{
	float kgstolose, days;
	cout << "Enter the amount of kgs you want to lose=> ";
	cin >> kgstolose;

		days = kgstolose * 15;
	cout << "It'll take " << days << "days to lose " << kgstolose << "kgs";

}