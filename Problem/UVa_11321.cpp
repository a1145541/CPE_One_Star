#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int m, n;
bool isodd(int s) {
	return s % 2 != 0;
}

bool cmp(int a,int b) {
	int moda = a % m;
	int modb = b % m;
	if (moda != modb) {
		return moda < modb;
	}
	else {
		if (isodd(a) && isodd(b)) {
			return a > b;
		}
		else if (isodd(a) != isodd(b)) {
			return isodd(a) > isodd(b);//偶數會被回傳為 0 所以isodd(b)會比isodd(a)小
		}
		else return a < b;
	}
	
}
int main() {
	while (cin >> n >> m && (n != 0 || m != 0)) {
		vector<int>hus;
		for (int i = 0; i < n;i++) {
			int a;
			cin >> a;
			hus.push_back(a);
		}
		sort(hus.begin(), hus.end(), cmp);
		cout << n << " " << m << endl;
		for (int i = 0; i < hus.size(); i++) {
			cout << hus[i] << endl;
		}
	}
	cout << "0 0" << endl;
}