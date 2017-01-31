#include<iostream>
#include<vector>
using namespace std;



void merge (vector<int> &a, int s, int m, int e) {
	vector <int> b;
	vector <int> c;
	for (int i = 0; i <(m-s+1); i++) b.push_back(a[s+i]);
	for (int i = 0; i < (e - m); i++) c.push_back(a[m+i+1]);

	int i = 0;
	int j = 0;
	int k = s;

	while (i < b.size() || j < c.size()) {
		if (i >=b.size()) {a[k] = c[j]; j++;}
		else if (j >=c.size()) {a[k] = b[i]; i++;}
		else if (c[j] < b[i]) {a[k] = c[j]; j++;}
		else {a[k] = b[i]; i++;}
	k++;

	}
}

void mergeSort (vector<int> &a, int s, int r) {
	if (s < r) {
	int m = s + (r-s)/2;

		mergeSort(a, s, m);
		mergeSort(a, m+1, r);
		merge(a, s, m, r);
	}

}

int main () {

	int n;
	cin >> n;
	int k;
	vector <int> a;
	for (int i = 0; i < n; i++) {
		cin >> k;
		a.push_back(k);


	}
	mergeSort(a, 0, n-1);

	for (int i = 0; i< n; i++) {
		cout << a[i] << endl;
	}

}
