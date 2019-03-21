#include<iostream>
using namespace std;

int main() {
	
	double current_ocean_level = 30;
	cout << "Let the current ocean level be 30 millimeters. It rises"
		 <<" at a rate of 1.5 mm per year.\n\n";

	double levelInFiveYears = current_ocean_level + (1.5 * 5);
	cout << "Ocean level(in mm) in 5 years: " << levelInFiveYears << endl;
	double levelInSevenYears = current_ocean_level + (1.5 * 7);
	cout << "Ocean level in 7(in mm) years: " << levelInSevenYears << endl;
	double levelInTenYears = current_ocean_level + (1.5 * 10);
	cout << "Ocean level in 10(in mm) years: " << levelInTenYears << endl;
}