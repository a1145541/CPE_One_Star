#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	cin.ignore();
	while (n--) {
		map<string, int>soh;
		string a;
		int total = 0;
		while (getline(cin, a)) {
			if (a == "") break;
			soh[a]++;
			total++;
		}
		for (auto p : soh) {
			double a = (double)p.second /total*100;
			cout << p.first<<" "<<fixed<< setprecision(4)<<a << endl;
		}
		if (n > 0)cout << endl;//每兩組間要有空行，最後一組後面不能有空行
	}
}