#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<char, int>a, pair<char, int>b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	map<char, int>hus;
	string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string lower = "abcdefghijklmnopqrstuvwxyz";
	vector<pair<char, int>>soh;
	while (n--) {
		string a;
		getline(cin, a);
		for (char c : a) {
			if (isalpha(c)) {
				if (islower(c)) {
					for (int i = 0; i < lower.length(); i++) {
						if (c == lower[i]) {
							c = upper[i];
							break;
						}
					}
				}
				hus[c]++;
			}
		}
		
	}
	for (auto p : hus) {
		soh.push_back({ p.first,p.second });
	}
	sort(soh.begin(), soh.end(), cmp);
	for (auto p : soh) {
		cout << p.first << " " << p.second << endl;
	}
}