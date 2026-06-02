#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		string N;
		cin.ignore();
		getline(cin, N);
		int n = 0;
		for (char c : N) {
			if (isdigit(c)) {
				n = n * 10 + c - '0';
			}
		}
		string b;
		vector<int>matrix;
		bool symmetrix = true;
		for (int i = 0; i < n; i++) {
			getline(cin, b);
			int num;
			stringstream ss(b);
			while (ss >> num) {
				matrix.push_back(num);
				if (num < 0) {
					symmetrix = false;
				}
			}
		}
		for (int i = 0; i < matrix.size()/2; i++) {
				if (matrix[i] != matrix[matrix.size()-i-1]) {
					symmetrix = false;
					break;
				}
		}
		cout << "Test #" << i << ": ";
		if (symmetrix == true) cout << "Symmetric."<<endl;
		else cout << "Non-symmetric."<<endl;
	}
}