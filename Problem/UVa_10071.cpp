#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main() {
	string a;
	while (getline(cin, a)) {
		vector<int>k;
		stringstream ss(a);
		int num;
		while (ss >> num) {
			k.push_back(num);
		}
		cout << k[0] * 2 * k[1]<<endl;
	}
}