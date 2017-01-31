#include<iostream>
#include<string>
#include<vector>
using namespace std;


void quicksort (vector<int>&a, int start, int end) {

	if (start == end) return;
	
	int i = start + 1;
	int j = end - 1;
	
	while (i<=j) {
		while (a[i] <= a[start]) i++;
		while (a[j] > a[start]) j--;
		if (i > j) break;
		swap(a[i], a[j]);
	}
	swap(a[j], a[start]);
	quicksort(a,start, j);
	quicksort(a, j+1, end);

}



int main () {
	cout << "please enter the length of the array: " << endl;
	int n;
	cin >> n;
	int k ;
	vector <int> a;

	for (int i = 0; i < n; i++) {
		cin >> k;
		a.push_back(k);
	}
	
	quicksort(a, 0, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}

}
