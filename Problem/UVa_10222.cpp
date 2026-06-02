#include<iostream>
#include<string>
using namespace std;
int main() {
	string cy = "1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string c =  "1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
	string n;
	while(getline(cin,n)){
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == ' ') {
			cout << " ";
			continue;
		}
		for (int j = 2; j < cy.length(); j++) {
			if (n[i] == cy[j]) {
				cout << cy[j - 2];
				break;
				}
			
			else if (n[i] == c[j]) {
				cout << cy[j - 2];
				break;
				}
			}
		}
	cout << endl;
	}
}