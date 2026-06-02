#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int m, n, q;
		cin >> m >> n >> q;
		char hus[100][100] = {'0'};
		for (int i = 0; i < m; i++) {
			string a;
			cin >> a;
			for (int j = 0; j < n; j++) {
				hus[i][j] = a[j];
			}
		}
		cout << m << " " << n << " " << q << endl;
		while (q--) {
			int r, c;
			cin >> r >> c;
			char p = hus[r][c];
			int k = 1, len = 1;
			//int k = 0;//int len = 0;這個錯
			while (true) {
				int r1 = r + k, r2 = r - k;
				int c1 = c + k, c2 = c - k;
				bool detect = true;
				if (r1 >=m || r2 < 0 || c1 >=n || c2 < 0) {
					break;
				}
				for (int i = r2; i <= r1; i++) {
					if (hus[i][c1] != p || hus[i][c2] != p) {
						detect = false;
						break;
					}
				}
				for (int i = c2; i <= c1; i++) {
					if (hus[r1][i] != p || hus[r2][i] != p) {
						detect = false;
						break;
					}
				}
				if (detect == false) break;
				len += 2;
				k++;
			}
			cout << len << endl;
		}
		

	}
}