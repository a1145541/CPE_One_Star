#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string a;
	int count;
	map<string, int>country;
	while (n--) {
		string b;
		cin >> a;
		country[a]++;
		getline(cin, b);
		
	}
	for (auto c : country) {
		cout << c.first << " " << c.second << endl;
	}
}