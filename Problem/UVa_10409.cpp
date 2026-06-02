#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int n;
	while (cin >> n && n != 0) {
		int north = 2, west = 3, top = 1;
		vector<string>step;
		while (n--) {
			string a;
			cin >> a;
			step.push_back(a);
		}
		for (int i = 0; i < step.size(); i++) {
			int south = 7 - north, bottom = 7 - top, east = 7 - west;
			if (step[i] == "north") {
				north = top;
				top = south;
			}
			else if (step[i] == "east") {
				top = west;
				west = bottom;
			}
			else if (step[i] == "south") {
				top = north;
				north = bottom;
			}
			else if (step[i] == "west") {
				west = top;
				top = east;
			}
		}
		cout << top << endl;
	}
}