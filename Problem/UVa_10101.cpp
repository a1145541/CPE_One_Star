#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
long long kuti = 10000000, lakh = 100000, hajar = 1000, shata = 100;
void bangla(long long a) {
	if (a  >=kuti) {
		bangla(a / kuti);
		cout << " kuti";
		a %= kuti;

	}
	if (a >= lakh) {
		bangla(a / lakh);
		cout << " lakh";
		a %= lakh;

	}
	if (a >= hajar) {
		bangla(a / hajar);
		cout << " hajar";
		a %= hajar;
	}
	if (a >= shata) {
		bangla(a/shata);
		cout << " shata";
		a %= shata;
	}
	if (a > 0)cout << " " << a;
}
int main() {
	long long n;
	int count = 0;
	while (cin >> n) {
		count++;
		cout << setw(4)<<count << ".";
		if (n == 0) {
			cout << " 0" << endl;
			continue;
		}
		
		
		bangla(n);
		cout << endl;
	}
}
