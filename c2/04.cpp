#include<iostream>

using namespace std;

int main() {

	cout << "Please enter the meal charge : $";
	double meal_charge;
	cin >> meal_charge;
	double tax =  (0.0675 * meal_charge);
	double tip = (0.2 * (meal_charge + tax));
	double total_bill = meal_charge + tax + tip;
	cout << "The meal cost is $" << meal_charge << endl
		 << "The tax amount is $" << tax << endl
		 << "The tip amount is $" << tip << endl
		 << "The total bill is $" << total_bill << endl;

	return 0;
}	