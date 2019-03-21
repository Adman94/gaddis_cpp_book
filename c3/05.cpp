#include<iostream>
using namespace std;

int main() {
	
	cout << "|| Male & Female Percentages ||" << endl;
	double num_of_males, num_of_females;
	cout << "Enter number of males in the class: ";
	cin >> num_of_males;
	cout << "Enter number of females: ";
	cin >> num_of_females;

	int total = num_of_males + num_of_females;
	double per_male, per_female;
	per_male = (num_of_males / total) * 100;
	per_female = (num_of_females / total) * 100;

	cout << "The percentage of male is " << per_male << "\% and the percentage of female is " << per_female << "\%." << endl;
}