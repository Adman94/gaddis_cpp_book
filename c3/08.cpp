#include <iostream>
#include <math.h>
using namespace std;



int numOfWidgets(double weightOfPallet, double weightWithWidgets) {
	double weightOfWidgets = weightWithWidgets - weightOfPallet;
	int numOfWidgets = ceil(weightOfWidgets / 12.5);
	return numOfWidgets;
}

int main() {
	double weightOfPallet, weightWithWidgets;
	cout << "Enter the weight of the pallet itself: ";
	cin >> weightOfPallet;
	cout << "Enter the weight of the pallet with widget: ";
	int count = 0;
	while(count != 10) {
		cin >> weightWithWidgets;
		weightWithWidgets *= 10;
		if((int(weightWithWidgets) % 125) == 0){
			break;
		}
		else {
			cout << "Error in weight! Try again!" << endl;
			cout << "Enter the weight of the pallet with widget: ";
			count++;
		}
	}
	
	cout << "The total number of widgets is " << numOfWidgets(weightOfPallet,weightWithWidgets) << ".\n";
}
