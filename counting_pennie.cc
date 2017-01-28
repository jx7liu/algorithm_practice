#include <iostream>
#include <string>
using namespace std;



void getChange (int i) {
	int toonie = 0;
	int loonie = 0;
	int quarters = 0;
	int dimes = 0;
	int nickel = 0;
	int pennie = 0;

	if (i >= 200) {
	cout << i/200 << " toonies" <<endl;
	i = i%200;
	}

	if (i >= 100) {
	cout << i/100 << " loonies" << endl;
	i = i%100;
	}
	
	if (i >= 25) {
	cout << i/25 << " quarters" << endl;
	i = i%25; 
	}

	if (i >= 10) {
	cout << i/10 << " dimes" << endl;
	i = i%10;
	}

	if (i >= 5) {
	cout << i/5 << " nickels" << endl;
	i = i%5;
		
	}

	if (i >0) {
	cout << i << " pennies" << endl;
	}
	

}

int main () {

	cout << "please enter the amount of cents want to calculate: "<< endl;
	int i = 0;
	cin >> i;
	if (!cin) {
		cout << "sorry, invalid input!" <<endl;
	}

	else {
		getChange(i);
	
	}

}
