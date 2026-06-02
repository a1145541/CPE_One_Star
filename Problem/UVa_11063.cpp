#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, count = 0;
	while (cin >> n) {
		vector<int>hus;
		vector<int>soh;
		count++;
		bool diff = true;
		while (n--) {
			int a;
			cin >> a;
			hus.push_back(a);
		}
		if (hus[0] <= 0)diff = false;
		for (int i = 1; i < hus.size(); i++) {
			if (hus[i] <= hus[i - 1]) diff = false;
		}
		for (int i = 0; i < hus.size(); i++) {
			for (int j = i; j < hus.size(); j++) {
				int f = hus[i] + hus[j];
				soh.push_back(f);
			}
		}
		for (int i = 0; i < soh.size()-1; i++) {
			for (int j = i + 1; j < soh.size(); j++) {
				if (soh[i] == soh[j]) {
					diff = false;
					break;
				}
			}
		}
		cout << "Case #" << count << ":";
		if (diff == true) cout << " It is a B2-Sequence.";
		else cout << " It is not a B2-Sequence.";
		cout << endl << endl;
	}
}