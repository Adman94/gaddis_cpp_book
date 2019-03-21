#include<iostream>
using namespace std;

int main() {
	long double p = 58.0, s, gen = 0.0;
	//cout << "Enter the percentage of total sales: ";
	//cin >> p;
	cout << "Enter the revenue in sales for this year: ";
	cin >> s;
	gen = (p/100)*s;
	cout << "The company would generate $" << gen <<  " this year.";
	cout << "\n";

	return 0;

}