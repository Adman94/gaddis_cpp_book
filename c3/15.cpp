#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double actualValue, assessmentValue, propertyTax;
  cout << "Enter the actual value of property: ";
  cin >> actualValue;
  assessmentValue = 0.60 * actualValue;
  propertyTax = 0.75 * 0.01 * assessmentValue;

  cout << "The assessment value of property: " << assessmentValue << fixed << setprecision(2);
  cout << endl;
  cout << "The property tax of property: " << propertyTax << fixed << setprecision(2);
  cout << endl;
}
