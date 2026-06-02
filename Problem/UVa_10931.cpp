#include<iostream>
#include<string>
using namespace std;
int main() {
	int a;
	while (cin >> a && a != 0) {
		string num = "";
		int count = 0;
		cout << "The parity of ";
		while (a > 0) {
			if (a % 2 == 0) {
				num += "0";
			}
			else  {
				num +="1";
				count++;
			}
			a /= 2;
		}
		for (int i = num.length() - 1; i >= 0; i--) {
			cout << num[i];
		}
		cout<< " is " << count << " (mod 2)."<<endl;
	}
}