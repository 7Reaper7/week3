#include <iostream>
using namespace std;
main()
{
	float veg_price, fruit_price;
	int total_kgs_veg, total_kgs_fruit;
	float veg_cost, fruit_cost;
	float total;
	float in_pkr;

	cout << "Enter Vegetable price per Kilogram=> ";
	cin >> veg_price;
	cout << "Enter Fruit price per Kilogram=> ";
	cin >> fruit_price;
	cout << "Enter total Kgs of Vegetables=> ";
	cin >> total_kgs_veg;
	cout << "Enter total kgs of Fruits=> ";
	cin >> total_kgs_fruit;
	
		veg_cost = veg_price * total_kgs_veg;
		fruit_cost = fruit_price * total_kgs_fruit;

		total = veg_price + fruit_price;
		in_pkr = total*1.94;
	
	cout << "Total Earnings in PKR=> " << in_pkr;
}