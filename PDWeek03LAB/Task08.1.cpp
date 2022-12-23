#include <iostream>
using namespace std;
main()
{
	int input, firstmod, secondmod, thirdmod, fourthmod, result;
	cout << "Enter a 4-digit Number=> ";
	cin >> input;
		
		firstmod = input%10;
		secondmod = (input/10) % 10;
		thirdmod = (input/100) % 10;
		fourthmod = (input/1000) % 10;
		result = firstmod+secondmod+thirdmod+fourthmod;
	cout << "Result=> " << result;
	
}