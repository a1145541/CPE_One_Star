#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	while (cin >> a) {
		if (a == "0") break;
		int sum = 0;
		for (char c : a) {
			sum += c - '0';
		}
		
		while(sum >= 10) {
			int x = 0;
			while (sum > 0) {
				x += sum % 10;
				sum /= 10;
			}
			sum = x;
		}
		cout << sum << endl;
	}
}