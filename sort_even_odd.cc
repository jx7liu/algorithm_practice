#include <vector>
#include <iostream>
using namespace std;

void separate (vector <int>&v) {
	int left = 0;
	int right = v.size() - 1;

	while (left < right) {

	while (v[left] %2 == 0 && left < right) left++;
	while (v[right]%2 == 1 && left < right) right--;

	if (left < right) {
		swap(v[left], v[right]);
		left++;
		right++;
	}
	}

}

int main () {
	vector <int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(9);
	v.push_back(7);
	v.push_back(10);
	separate(v);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;

	}

}
