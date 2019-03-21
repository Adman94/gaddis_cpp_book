#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double YEN_PER_DOLLAR = 98.93, EUROS_PER_DOLLAR = 0.74;
  double usd;
  cout << "Enter the amount in USD: ";
  cin >> usd;
  double yen = usd * YEN_PER_DOLLAR;
  double euros = usd * EUROS_PER_DOLLAR;

  cout << "Amount in YEN: " << yen << fixed << setprecision(2)
  << "\nAmount in EUROS: " << euros << fixed << setprecision(2);
  cout << endl;
}
