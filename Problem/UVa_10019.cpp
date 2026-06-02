#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		int count1 = 0;
		int a2 = a;
		while (a > 0) {
			if (a % 2 != 0) {
				count1++;
			}
			a = a / 2;
		}
		int count2 = 0;
		while (a2 > 0) {
			int c = a2 % 10;
			while (c > 0) {
				if (c % 2 != 0) count2++;
				c /= 2;
			}
			a2 /= 10;
		}
		cout << count1 << " " << count2 << endl;
	}
}