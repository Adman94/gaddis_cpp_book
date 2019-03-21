#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int year;
    string month;
    double totalAmountCollected, stateTax, countyTax, totalTax;

    cout << "Enter the month (in words): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected: ";
    cin >> totalAmountCollected;

    double productSales = totalAmountCollected / 1.06;
    stateTax = productSales * 0.04;
    countyTax = productSales * 0.02;
    totalTax = productSales * 0.06;

    cout << "\nYear: " << year << "\nMonth: " << month <<
      "\n---------------\n";
    cout << "Total Collected:\t$ " << fixed << setprecision(2) << totalAmountCollected;
    cout << "\nSales:\t\t\t$ " << fixed << setprecision(2) << productSales;
    cout << "\nCounty Sales Tax:\t$ " << fixed << setprecision(2) << countyTax;
    cout << "\nState Sales Tax:\t$ " << fixed << setprecision(2) << stateTax;
    cout << "\nTotal Sales Tax:\t$ " << fixed << setprecision(2) << totalTax;
    cout << endl;
}
