#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>fib(500);
	fib[0]=1;
	fib[1]=2;
	for (int i = 2; i < fib.size(); i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int n;
	while (cin >> n) {
		while (n--) {
			int a;
			cin >> a;
			cout << a<<" = ";
			int mini = 0,ans = 0;
				for (int i = 0; i < fib.size(); i++) {
					if (fib[i] <= a) {
						mini = i;
					}
					else break;
				}
				for (int i = mini; i >= 0; i--) {
					if (fib[i] <= a) {
						a -= fib[i];
						cout << "1";
					}
					else cout << "0";
				}
				cout << " (fib)"<<endl;
			}
		}
	}
