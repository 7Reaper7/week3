#include <iostream>
using namespace std;

main()
{
	int megabytes, bits;
	cout << "Enter Value in MegaBytes=> ";
	cin >> megabytes;
	bits = 1024 * 1024 * 8 * megabytes;
	cout << "Given MegaBytes in Bits are=> " << bits;
}
