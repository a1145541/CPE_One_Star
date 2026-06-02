#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int days, parties;
		vector<int>hus;
		set<int>soh;
		cin >> days >> parties;
		while (parties--) {
			int a;
			cin >> a;
			hus.push_back(a);
		}
		int count=0;
		for (int i = 0; i < hus.size(); i++) {
			int sum = hus[i];
			while (sum <= days) {
				if (sum % 7 != 6 && sum % 7!= 0) {
					soh.insert(sum);
				}
				
				sum += hus[i];
			}
		}
		cout << soh.size() << endl;

	}
}