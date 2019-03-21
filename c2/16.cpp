#include<iostream>
using namespace std;

int main() {
	int row = 4;

	for(int i = 1, k = 0; i <= row; i++, k = 0){
       
       for(int space = 1; space <= row-i; space++){
            cout <<"  ";
        }
   
        while(k != 2*i-1) {
            cout << "* ";
            k++;
        }
        cout << endl;
        
    }

    row = 3;

	for(int i = row, count = 0; i > 0; i--, count = 0) {

		for(int space = row-i; space > -1 ; space--){
            cout <<"  ";
        }

		while(count != 2*i-1) {
			cout << "* ";
			count++;
		}
		cout << endl;
	}
	
}