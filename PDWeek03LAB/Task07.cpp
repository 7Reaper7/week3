#include <iostream>
using namespace std;
main()
{
	string name;
	int adult_price, children_price;
	int adult_ticket_sold, children_ticket_sold;
	int total;
	float donation_percent, after_donation;

		cout << "Enter Movie Name=> ";
		cin >> name;
		cout << "Enter Adult ticket price=> ";
		cin >> adult_price;
		cout << "Enter Children ticket price=> ";
		cin >> children_price;
		cout << "Enter Number of Adult ticket sold=> ";
		cin >> adult_ticket_sold;
		cout << "Enter Number of Children ticket sold=> ";
		cin >> children_ticket_sold;
		cout << "Enter Percentage to Donate=> ";
		cin >> donation_percent;

			total = (adult_price*adult_ticket_sold) + (children_price*children_ticket_sold);
			after_donation = total - (total*(donation_percent/100));
		cout << "Total generated=> " << total << endl;
		cout << "Amount after donation=> " << after_donation;
}