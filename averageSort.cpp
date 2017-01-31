#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



double findMean (vector <double>& a, int s, int t) {
        double k = 0;
        for (int i = s; i < t; i++) {
                k +=a[i];
        }
return k/(t-s) ;

}

int findClosest (vector <double> &a, int s, int t, double m) {
        double diff = abs(m-a[s]);
        int in = s;

        for (int i = s; i < t; i++) {
                double temp = abs(m-a[i]);
                if (temp < diff) {
                        diff = temp;
                        in = i;
                }
        }
        return in;

}

void seansort (vector <double>&a, int s, int t) {
        if (s == t) return;
        double m = findMean(a, s, t);
        int k = findClosest(a, s,t,m);
        int j = t-1;
	swap (a[s], a[k]);
	int i = s+1;
        while (i <= j) {

                while (i < t && a[i] <= a[s]) i++;
                while (j >= s && a[j] > a[s]) j--;
                if (j < i) break;
                else swap (a[i], a[j]);
        }
        swap(a[s], a[j]);
        seansort(a, s, j);
        seansort(a, j+1, t);

}

int main () {

vector <double> a;
int n;
cout << "Please enter array length" << endl;
cin >> n;
double i;
for (int t = 0; t < n; t++) {
        cin >> i;
        a.push_back(i);
}


seansort(a, 0, n);

for (int p = 0; p < n; p++) {
cout << a[p] << endl;
}
}
