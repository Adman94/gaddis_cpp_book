#include <iostream>
using namespace std;

int main() {
  cout << "Enter temperature in Celcius: ";
  double c,f;
  cin >> c;

  f = ((9 * c) / 5) + 32;

  cout << "The temperature in fahrenheit is " << f << endl;
}
