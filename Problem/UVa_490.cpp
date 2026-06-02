#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	string a;
	vector<string>hus;
	while (getline(cin, a)) {
		hus.push_back(a);
	}
	int max = 0;
	for (int i = 0; i < hus.size(); i++) {
		if (hus[i].length() > max) {
			max = hus[i].length();
		}
	}
	for (int i = 0; i < max; i++) {
		for (int j = hus.size() - 1; j >= 0; j--){
			if (i >= hus[j].length())cout << " ";
			else cout << hus[j][i];
		}
		cout << endl;
	}
}