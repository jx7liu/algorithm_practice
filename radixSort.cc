#include<iostream>
#include<vector>
#include<string>
using namespace std;



void radixSort(vector<int> &a, int n, int exp) {
	vector <int> count(10,0);
	vector<int> temp(n,0);

	for (int i = 0; i < n; i++) {
		count[(a[i]/exp)%10]++;
	}

	for (int i = 1; i < 10; i++) {
		count[i] += count[i-1];
	}

	for (int i = 0; i < n; i++) {
		temp[count[(a[i]/exp)%10]-1] = a[i];
		count[(a[i]/exp)%10]--;
	
	}
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}



}


int main () {

	cout << "Enter the length of the array: " << endl;
	int n, k;
	cin >> n;
	vector <int> a;
	cin >> k;
	a.push_back(k);
	int max = k;
	for (int i = 1; i < n; i++) {
		cin>>k;
		a.push_back(k);
		if (k > max) max = k;
	}

	for (int exp = 1; max/exp > 0; exp *=10){
		radixSort(a, n, exp);
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
