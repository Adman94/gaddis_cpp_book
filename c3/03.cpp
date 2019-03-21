#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double sum = 0, score;

	for(int i = 0; i < 5; i++) {

		cout << "Enter test score " << i+1 << ": ";
		cin >> score;
		sum += score; 
	}

	double avg = sum / 5;

	cout << "The average of the five test scores is " << setprecision(1) << fixed << avg << endl;
}