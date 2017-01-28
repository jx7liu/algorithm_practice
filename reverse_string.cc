#include <iostream>
#include <string>
using namespace std;


string reverse_s (string s) {
	int len = s.size() - 1;
	for (int i = 0; i < len; i++, len--) {
		char temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	
	}
	return s;

}
int main () {
	string s;
	getline(cin, s);
	if (!cin) {cout << "invalid, input";}
	else {s = reverse_s(s); cout << s;}
}
