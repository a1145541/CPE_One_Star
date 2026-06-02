//邏輯簡單但複雜
//***
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	int x1, y1;
	char a;
	vector<pair<int, int>>grid;
	while (cin >> x1 >> y1 >> a) {
		string ins;
		cin >> ins;

		bool lost = false;
		for (char c : ins) {
			bool scent = true;//每一次開始找下一個字都要先甕回true
			if (a == 'E') {
				if (c == 'R') {
					a = 'S';
				}
				if (c == 'L') {
					a = 'N';
				}
				if (c == 'F') {
					x1++;

					if (x1 > x) {//確定會走出界後再開始找她有沒有被記錄過
						x1 = x1 - 1;
						for (int i = 0; i < grid.size(); i++) {
							if (x1 == grid[i].first && y1 == grid[i].second) {
								scent = false;
								break;
							}
						}
						if (scent == false) continue;
						grid.push_back({ x1 ,y1 });
						lost = true;
						break;
					}
				}
			}
			else if (a == 'N') {
				if (c == 'R') {
					a = 'E';
				}
				if (c == 'L') {
					a = 'W';
				}
				if (c == 'F') {

					y1++;
					if (y1 > y) {
						y1 = y1 - 1;
						for (int i = 0; i < grid.size(); i++) {
							if (x1 == grid[i].first && y1 == grid[i].second) {
								scent = false;
								break;
							}
						}
						if (scent == false) continue;

						grid.push_back({ x1,y1 });
						lost = true;
						break;
					}
				}
			}
			else if (a == 'S') {
				if (c == 'R') {
					a = 'W';
				}
				if (c == 'L') {
					a = 'E';
				}
				if (c == 'F') {

					y1--;

					if (y1 < 0) {
						y1 = y1 + 1;
						for (int i = 0; i < grid.size(); i++) {
							if (x1 == grid[i].first && y1 == grid[i].second) {
								scent = false;
								break;
							}
						}
						if (scent == false) continue;

						grid.push_back({ x1,y1 });
						lost = true;
						break;
					}
				}
			}
			else if (a == 'W') {
				if (c == 'R') {
					a = 'N';
				}
				if (c == 'L') {
					a = 'S';
				}
				if (c == 'F') {
					x1--;
					if (x1 < 0) {
						x1 = x1 + 1;

						for (int i = 0; i < grid.size(); i++) {
							if (x1 == grid[i].first && y1 == grid[i].second) {
								scent = false;
								break;
							}
						}
						if (scent == false) continue;

						grid.push_back({ x1,y1 });
						lost = true;

						break;
					}

				}
			}
		}
		if (lost == true)cout << x1 << " " << y1 << " " << a << " LOST" << endl;
		else cout << x1 << " " << y1 << " " << a << endl;
	}
}