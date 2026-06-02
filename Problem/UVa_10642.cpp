#include<iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2,n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> y1 >> x1 >> y2 >> x2;
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < x1 + y1; i++) {
			sum1 += i;
		}
		for (int i = 0; i < x2 + y2; i++) {
			sum2 += i;
		}
		sum1 += x1 + y1 + y1;
		sum2 += x2 + y2 + y2;
		cout << "Case " << i << ": " << abs(sum2 - sum1) << endl;
	}
}