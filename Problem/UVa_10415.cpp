#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	map<char, string>note;
	note['c'] = "0111001111";
	note['d'] = "0111001110";
	note['e'] = "0111001100";
	note['f'] = "0111001000";
	note['g'] = "0111000000";
	note['a'] = "0110000000";
	note['b'] = "0100000000";
	note['C'] = "0010000000";
	note['D'] = "1111001110";
	note['E'] = "1111001100";
	note['F'] = "1111001000";
	note['G'] = "1111000000";
	note['A'] = "1110000000";
	note['B'] = "1100000000";
	while (n--) {
		int finger[10] = { 0 };
		bool tap[10] = { 0 };
		string a;
		getline(cin, a);
		for (char c : a) {
			string d = note[c];
			for (int i = 0; i < 10; i++) {
				if (d[i] == '1') {
					if (!tap[i]) {
						
						finger[i]++;
					}
					tap[i] = 1;	
				}
				else tap[i] = 0;
			}
				
			
		}
		for (int i = 0; i < 10; i++) {													
			cout << finger[i];
			if (i < 9) {
				cout << " ";
			}
		}
		cout << endl;
	}
}