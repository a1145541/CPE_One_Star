#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int num(char a) {
	if (isupper(a))return a - 'A' + 10;
	if (islower(a))return a - 'a' + 36;
	if (isdigit(a))return a - '0';
	return -1;
}
int main() {
	string c;
	while (cin >> c) {
		int maxc = 0;
		int sum = 0;
		for (char p : c) {
			int x = num(p);
			if (x != -1) {
				sum += x;
				if (x > maxc) {
					maxc = x;
				}
			}
		}
		bool possible = false;
		int base = max(2, maxc+1);
		for (int i = base; i <= 62; i++) {
			if (sum % (i - 1) == 0) {
				possible = true;
				cout << i << endl;
				break;
			}
		}
		if(possible == false) cout << "such number is impossible!" << endl;
	}
}