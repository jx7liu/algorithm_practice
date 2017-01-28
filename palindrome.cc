#include <string>
#include <iostream>
#include <sstream>
using namespace std;


bool isPalindrome (const string s) {

	int len = s.size() - 1;
	if (len <= 0) return true;

	for ( int i = 0; i < len; i++, len--) {
	if (s[i] == s[len]) continue;
	if (toupper(s[i]) != toupper(s[len])) return false;
	}
	return true;
}

int main () {
	string s;
	cin >> s;
//	if (!cin) {cout << "invalid!"<< endl;}
	bool i  = isPalindrome(s);
	cout << i <<endl;	

}
