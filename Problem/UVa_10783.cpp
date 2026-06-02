#include<iostream>
using namespace std;

int main() {
	int a,k,j,sum=0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> k;
		cin >> j;
		for (int f = k; f <= j; f++) {
			if (f % 2 != 0) {
				sum += f;
			}

		}
		cout <<"Case "<<i<<": "<< sum<<endl;
		sum = 0;
	}
}