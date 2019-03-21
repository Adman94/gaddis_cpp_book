#include<iostream>
using namespace std;

int main() {
	
	double cost_price = 14.95, selling_price;

	selling_price = cost_price + (0.35 * cost_price);

	cout << "The selling price of the circuit board is " << selling_price << " (35\% profit)" << endl;
}