#include<iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b && (a != 0 || b != 0)) {
		int c = 0, ans = 0;
		while (a > 0 || b > 0) {
			int a1 = a % 10;
			int b1 = b % 10;
			if (a1 + b1 +c>= 10) {
				c = 1;
				ans++;
			}
			else {
				c = 0;
			}
			a /= 10;
			b /= 10;
		}
		if (ans == 0) cout << "No carry operation.";
		else if (ans == 1)cout << "1 carry operation.";
		else if(ans > 1) cout << ans << " carry operations.";
		cout << endl;
	}
}