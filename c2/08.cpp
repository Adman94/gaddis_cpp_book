#include<iostream>
using namespace std;

int main() {
	
	double priceOfItem1 = 15.95, priceOfItem2 = 24.95,
		   priceOfItem3 = 6.95, priceOfItem4 = 12.95,
		   priceOfItem5 = 3.95;

	double subTotal = priceOfItem1 + priceOfItem2 + priceOfItem3 + priceOfItem4 + priceOfItem5;
	double salesTax = 0.07 * subTotal;

	double total = subTotal + salesTax;

	cout << "Price of item 1: $" << priceOfItem1 << endl
		 << "Price of item 2: $" << priceOfItem2 << endl
		 << "Price of Item 3: $" << priceOfItem3 << endl
		 << "Price of Item 4: $" << priceOfItem4 << endl
		 << "Price of Item 5: $" << priceOfItem5 << endl
		 << "The Subtotal is: $" << subTotal << endl
		 << "The Sales Tax is: $" << salesTax << endl
		 << "The Total is: $" << total << endl
		 << "---------------" << endl
		 << " G O O D B Y E " << endl
		 << "---------------" << endl;

}