#include<iostream>
using namespace std;

int main() {
	const double NUM_COOKIES = 30, SERVINGS = 10, CAL_PER_SERV = 300;
	int count = 0;

	while(count < 10) {
		int input;
		double calorie_per_cookie, total_calories;
				cout << "Enter the number of cookies consumed: ";
				cin >> input;
			if(input > 0 && input <= 30) {
				calorie_per_cookie = (SERVINGS * CAL_PER_SERV) / NUM_COOKIES;
				total_calories = calorie_per_cookie * input;

				cout << "TOTAL CALORIES CONSUMED: " << total_calories << endl;
				break;
			}
			else {
				cout << "Invalid Input! Try Again!" << endl;
				count++;
			}
		}
		return 0;
}