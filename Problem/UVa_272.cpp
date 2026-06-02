#include<iostream>
#include<string>
using namespace std;


	/**/int main() {
		char a;
		int b = 0;
		while (cin.get(a)) {//輸入一個字元就讀一個字元
				if (a == '"') {
					b++;
					if (b % 2 == 0) {
						cout << "''";
					}
					else {
						cout << "``";
					}
				}
				else
					cout << a;
			}
		}

