#include<iostream>
using namespace std;
int main() {
	long long s, d;
	while (cin >> s >> d) {
		long long i = s, j = s;
		while (j < d) {
			i++;
			j += i;
		}
		cout << i << endl;
	}
}