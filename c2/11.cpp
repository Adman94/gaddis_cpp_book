#include<iostream>
using namespace std;

int main() {
	
	const int GALL = 20;
	double mileage_in_town = 23.5, mileage_on_highway = 28.9;

	double distance_in_town = GALL * mileage_in_town;
	double distance_on_highway = GALL * mileage_on_highway;

	cout << "The distance travelled by car in town: " << distance_in_town << endl;
	cout << "The distance travelled by car on highway: " << distance_on_highway << endl;
}