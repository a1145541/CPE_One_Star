#include<iostream>
using namespace std;
bool isprime(int a) {
	if (a < 2)return false;
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0)return false;
	}
	return true;
}
int main() {
	int n;
	while (cin >> n){
	int c = n;
	int x = 0;
	while (n > 0) {
		x = x * 10 + n % 10;
		n /= 10;
	}
	if (isprime(c) && isprime(x)&&c!=x) {
		cout << c << " is emirp.";
	}
	else if (isprime(c)) {
		cout << c << " is prime.";
	}
	else cout << c << " is not prime.";
	cout << endl;
		}
return 0;
}