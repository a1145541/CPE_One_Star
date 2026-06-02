#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main() {
	int x;
	while (cin >> x) {
		cin.ignore();
		string a;
		getline(cin, a);
		stringstream ss(a);
		vector<int>arr;
		long long num;
		while (ss >> num) {
			arr.push_back(num);
		}
		long long t = arr.size();
		
		long long ans = 0;
		for (int i = 0; i < arr.size()-1; i++) {
			t--;
			ans = ans*x+(arr[i]* t);
		}
		cout << ans << endl;
	}
}