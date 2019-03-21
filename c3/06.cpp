#include<iostream>
using namespace std;

double getSugar(int);
double getButter(int);
double getFlour(int);

int main() {

	int numOfCookies;
	cout << "Enter the number of cookies the user wants to make: ";
	cin >> numOfCookies;

	cout << "You'd need " << getSugar(numOfCookies) << " cups of sugar, " << getButter(numOfCookies)
		 << " cups of butter, " << getFlour(numOfCookies) << " cups of flour to make " 
		 << numOfCookies << " cookies." << endl;
}

double getSugar(int cookies) {
	double cupsOfSugar;

	cupsOfSugar = (1.5 / 48.0) * cookies;
	return cupsOfSugar;
}

double getButter(int cookies) {
	double cupsOfButter;

	cupsOfButter = (1 / 48.0) * cookies;
	return cupsOfButter;
}

double getFlour(int cookies) {
	double cupsOfFlour;

	cupsOfFlour = (2.75 / 48.0) * cookies;
	return cupsOfFlour;
}