#include<iostream>
using namespace std;

int main() {
	
	int total_surveyed = 16500;
	int energy_drink_buyers = (15 * total_surveyed) / 100;
	int citrus_buyers = (58 * energy_drink_buyers) / 100;

	cout << "Approx. number of customers purchasing one or more energy drinks: " << energy_drink_buyers << endl;
	cout << "Approx. number of customers who prefer citrus-flavored energy drinks; " << citrus_buyers << endl;
}