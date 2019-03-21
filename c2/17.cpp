#include<iostream>
using namespace std;

int main() {
	
	int num_of_shares = 750, price_per_share = 35;
	int amount_for_stock = num_of_shares * price_per_share;
	double commission = (2 * amount_for_stock) / 100;
	double total_paid = amount_for_stock + commission;

	cout << "Amount paid for stock alone: $" << amount_for_stock << endl;
	cout << "Amount of commission: $" << commission << endl;
	cout << "Total amount paid: $" << total_paid << endl;
}