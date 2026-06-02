#include<iostream>
using namespace std;
int gcd(int a, int b) {
	while (b > 0) {
		int t = a%b;
		a = b;
		b = t;
	}
	return a;
}
int main() {
	int N;
	while (cin >> N && N != 0) {
		int G = 0;
		for (int i = 1; i < N;i ++) {
			for (int j = i + 1; j <= N; j++) {
				G += gcd(i, j);
			}
		}
		cout << G << endl;
	}
}