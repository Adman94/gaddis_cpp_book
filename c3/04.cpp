#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	
	string month,month1,month2,month3;
	double rainfall,total,avg;
	
	for(int i = 0; i < 3; i++) {
		cout << "Enter month " << i+1 << ": ";
		cin >> month;
			if(i == 0) {
				month1 = month;
			}
			else if(i == 1) {
				month2 = month;
			}
			else {
				month3 = month;
			}
		cout << "Enter rainfall for month " << i+1 <<": ";
		cin >> rainfall;
		total += rainfall;
	}

	avg = total / 3;

	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " 
	<< setprecision(2) << fixed << avg << " inches." << endl;
}