#include<iostream>
using namespace std;
int main() {
	int i, j, max = 0;
	while (cin >> i >> j) {
		cout << i << " " << j;
		if (i > j)
			swap(i, j);
		for (int x = i; i <= j; i++) {
			int k = 1;
			x = i;
			while (x != 1) {
				if (x % 2 != 0)
					x = 3 * x + 1;
				else
					x = x / 2;
				k++;
			}

			if (k > max)
				max = k;
		}
		cout << " " << max << endl;
		max = 0;
	}
}