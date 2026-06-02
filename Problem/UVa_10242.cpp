#include<iostream>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
int main() {
	double x,y;
	vector<pair<double, double>>spot;
	while (cin>>x>>y) {
		spot.clear();
		spot.push_back({ x,y });
		for (int i = 0; i < 3; i++) {
			cin >> x >> y;
			spot.push_back({ x,y });
		}
		double x1 = 0, y1 = 0;
		for (int i = 0; i < spot.size(); i++) {
			for (int j = i+1; j < spot.size(); j++){
				if (spot[i] == spot[j]) {
					x1 = spot[i].first;
					y1 = spot[i].second;
				}
			}
		}
		double ansx = 0;
		double ansy = 0;
		for (auto p : spot) {
			ansx += p.first - x1;
			ansy += p.second - y1;
		}
		cout <<fixed<<setprecision(3)<<ansx + x1 << " " << ansy + y1 << endl;
	}
}