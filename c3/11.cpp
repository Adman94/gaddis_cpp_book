#include<iostream>
using namespace std;

int main() {
	double loan, ins, gas, oil, tires, maintenance,
			total_monthly_cost, total_annual_cost;
	cout << "Enter the following monthly cost:"
		 << endl << "Loan payment: $";
	cin >> loan;
	cout << "Insurance: $";
	cin >> ins;
	cout << "Gas: $";
	cin >> gas;
	cout << "Oil: $";
	cin >> oil;
	cout << "Tires: $";
	cin >> tires;
	cout << "Maintenance: $";
	cin >> maintenance;

	cout << endl;
	total_monthly_cost = loan+ins+gas+oil+tires+maintenance;
	total_annual_cost = total_monthly_cost * 12;

	cout << "Total monthly cost: $";
	cout << total_monthly_cost << ".";
	cout << endl;
	cout << "Total monthly cost: $";
	cout << total_annual_cost << ".";
	cout << endl;

	return 0;
}
