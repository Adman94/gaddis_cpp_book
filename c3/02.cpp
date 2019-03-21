#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	
	double a, b, c;
	cout << "Please enter total number of Class A tickets sold: ";
	cin >> a;
	cout << "Please enter total number of Class B tickets sold: ";
	cin >> b;
	cout << "Please enter total number of Class C tickets sold: ";
	cin >> c;

	double total_income = (a * 15.0) + (b * 12.0) + (c * 9.0);

	cout << "The amount of income generated from ticket sales is $" << setprecision(2) 
	<< fixed << total_income << endl;
}