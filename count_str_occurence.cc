#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

void count(string s) {
	istringstream ss (s);
	map <string, int> m;
	string t;
	while (ss >> t) {
		m[t]++;
	}

	for (map<string, int>:: iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	

}

int main () {

	string s;
	getline (cin, s);
	count(s);	

}
