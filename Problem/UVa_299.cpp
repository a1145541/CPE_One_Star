#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int num, s;
		vector<int>hus;
		cin >> num;
		for (int i = 0; i < num; i++) {
			cin >> s;
			hus.push_back(s);
		}
		int sum = 0;
		for (int i = 0; i < num; i++) {
			for (int j = i; j < num; j++) {//把大的往後丟
				if (hus[i] > hus[j]) {
					swap(hus[i], hus[j]);
					sum++;
				}
			}
		}
		cout << "Optimal train swapping takes " << sum << " swaps." << endl;
	}
}