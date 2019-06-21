#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double actualValue, assessmentValue, propertyTax, taxRate, annualPropTax, qTax;
  cout << "Enter the actual value of property: ";
  cin >> actualValue;
  cout << "Enter the current tax rate for each $100 of assessed value ($): ";
  cin >> taxRate;
  assessmentValue = 0.60 * actualValue;
  propertyTax = 0.75 * 0.01 * assessmentValue;
  annualPropTax = (taxRate / 100) * (assessmentValue - 5000);
  qTax  = annualPropTax / 4;

  cout << "The annual property tax is: " << annualPropTax << fixed << setprecision(2);
  cout << endl;
  cout << "The quarterly tax of property is: " << qTax << fixed << setprecision(2);
  cout << endl;
}
