#include<iostream>
#include<vector>
#include<string>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string S, L;
		int sum = 0, lum = 0;
		cin >> S >> L;
		for (int i = 0; i < S.size(); i++) {
			sum = sum * 2 + (S[i] - '0');
		}
		for (int i = 0; i < L.size(); i++) {
			lum = lum * 2 + (L[i] - '0');
		}
		cout << "Pair #" << i << ":";
		if (gcd(sum, lum) != 1) {
			cout << " All you need is love!" << endl;
		}
		else
			cout << " Love is not all you need!" << endl;
	}
}