#include<iostream>
#include<math.h>

using namespace std;

int main() {
	double num_of_gallons, full_tank_miles, miles_per_gallon;

	cout << "Enter the number of gallons your car can hold: ";
	cin >> num_of_gallons;
	cout << "Enter the number of miles driven on full tank: ";
	cin >> full_tank_miles;

	miles_per_gallon = full_tank_miles / num_of_gallons;

	cout << "Your car gives " << miles_per_gallon << " miles per gallons of gas.\nThank you!\n";
}