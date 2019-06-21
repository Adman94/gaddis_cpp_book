#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<ctime>
using namespace std;

int main() {
  double x, y, sum;
  unsigned seed = time(0);
  srand(seed);

  cout << "Welcome to the Math tutor program!" << endl;
  cout << "You have to find the sum of two random numbers x & y provided." << endl;

  x = 1 + rand() % 300;
  y = 1 + rand() % 300;
  sum = x + y;

  cout << "x is " << x << " & y is " << y << "." << endl;
  cout << "Press Enter for answer!";
  cin.get();
  cout << " The sum of x & y is " << sum << endl;
}
