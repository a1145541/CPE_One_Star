#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		vector<int>jolly;
		set<int>hus;
		for(int i =0;i<n;i++) {
			int a;
			cin >> a;
			jolly.push_back(a);
		}
		bool jumper = true;
		for (int i = 1; i < jolly.size(); i++) {
			int b = abs(jolly[i] - jolly[i-1]);
			if (b<1 || b>n - 1) {
				jumper = false;
				break;
			}
			hus.insert(b);
		}
		if (hus.size() != n - 1 && n!=1) jumper = false;
		if (jumper==false) {
			cout << "Not jolly";
		}
		else
			cout << "Jolly";
		cout << endl;
	}
}