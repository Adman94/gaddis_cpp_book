#include<iostream>

using namespace std;

int main() {
	
	double pur;
	cout << "Enter the total number of purchase: $";
	cin >> pur;

	double state_sales_tax = (0.04 * pur);
	double county_sales_tax = (0.02 * pur);

	double total_sales_tax = state_sales_tax + county_sales_tax;

	cout << "The total sales tax is $" << total_sales_tax;
	cout << endl;

	return 0; 
}
