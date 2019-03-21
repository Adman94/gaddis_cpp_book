#include<iostream>
using namespace std;

int main() {

  double payAmount = 2200.0;
  int payPeriods = 26;
  double annualPay;

  annualPay = payAmount * payPeriods;
  cout << "The employee's annual pay is $" << annualPay << endl;
}
