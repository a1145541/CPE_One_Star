#include<iostream>
#include<iostream>
using namespace std;
int main() {
	string a;
	while (cin >> a&&a!="0") {
		long long num = 0, degree = 0;
		for (char c : a) {
			num += c - '0';
		}
		if (num % 9 == 0) {
			degree++;
			while (num > 10) {
				int s = 0;
				while (num > 0) {
					s += num % 10;
					num /= 10;
				}
				if (s % 9 == 0) {
					degree++;
				}
				num = s;
			}
		}
		cout << a;
		if (degree > 0) {
			cout << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
		}
		else cout << " is not a multiple of 9." << endl;
	}
}