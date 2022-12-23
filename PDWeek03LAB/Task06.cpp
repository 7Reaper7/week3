#include <iostream>
using namespace std;
main()
{
	int size_of_bag, cost_of_bag, area_covered;
	int cost_per_pound, cost_area;
	
		cout << "Enter Bag size in Pounds=> ";
		cin >> size_of_bag;
		cout << "Enter Cost of one Bag=> ";
		cin >> cost_of_bag;
		cout << "Enter are covered by each bag in Square Feet=> ";
		cin >> area_covered;
		
			cost_per_pound = cost_of_bag/size_of_bag;
			cost_area = cost_of_bag/area_covered;
		cout << "The fertilizer per pound=> " << cost_per_pound << endl;
		cout << "Fertilizing cost of are per square feet=> " << cost_area;

}