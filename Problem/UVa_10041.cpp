#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int a, arr[30000] = { 0 };
		cin >> a;
		for (int i = 0; i < a; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < a; i++) {
			for (int j = i; j < a; j++) {
				if (arr[i] > arr[j]) {
					swap(arr[i], arr[j]);
				}
			}
		}
		int sum = 0;
		for (int i = 0; i < a; i++) {
			sum += abs(arr[i] - arr[(a - 1) / 2]);
		}
		cout << sum << endl;
	}
}