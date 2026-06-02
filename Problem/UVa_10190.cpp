#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	long long m, n;
		while (cin >> m >> n) {
			if (m< n || n < 2 || m < 2) {
				cout << "Boring!" << endl;
				continue;
			}
			bool boring = false;
			vector<long long>hus;
			while (m > 0) {	
				if (m % n != 0&& m!=1) {
					boring = true;
					break;
				}
				hus.push_back(m);
				m /= n;
			}
			if (boring == false) {
				for (int i = 0; i < hus.size(); i++) {
					cout << hus[i];
					if (i < hus.size() - 1) {
						cout << " ";
					}
				}
			}
			else cout << "Boring!";
			cout << endl;
	}
}