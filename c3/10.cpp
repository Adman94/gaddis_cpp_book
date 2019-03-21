#include<iostream>
using namespace std;

int main() {
	double replacement_cost, min_amount;

	cout << "Enter the replacement cost of the building: ";
	cin >> replacement_cost;

	min_amount = replacement_cost * 0.80;

	cout << "The minimum amount of insurance to be bought for the house is $" 
		 << min_amount << "." << endl;

	return 0;

}