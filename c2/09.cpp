#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	cout << "---------------------------" << endl;
	cout << "DATA_TYPE MEM_USAGE(BYTES)" << endl;
	cout << "---------------------------" << endl;
	
	cout << "CHAR" << setw(12) << sizeof(char) << " byte(s)." << endl;
	cout << "INT" << setw(13) << sizeof(int) << " byte(s)." << endl;
	cout << "FLOAT" << setw(11) << sizeof(float) << " byte(s)." << endl;
	cout << "DOUBLE" << setw(10) << sizeof(double) << " byte(s)." << endl;
}