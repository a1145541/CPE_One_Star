#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<char,int>a,pair<char,int>b) {
	if (a.second == b.second)return a.first > b.first;
	return a.second < b.second;
}
int main() {
	string a;
	bool first = true;
	while (getline(cin, a)) {
		map<char, int>hus;
		if (!first) {
			cout << endl;
		}
		first = false;
		for (char c : a) {
			hus[c]++;
		}
		vector<pair<char, int>>soh;
		for (auto p : hus) {
			soh.push_back({ p.first,p.second });
		}
		sort(soh.begin(), soh.end(), cmp);
		for (auto k : soh) {
			int d = k.first;
			cout << d << " " << k.second << endl;
		}
		
	}
}
