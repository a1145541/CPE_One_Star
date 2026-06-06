#include <iostream>
#include <vector>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<string> v = { "Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int main() {
    int N;
    cin >> N;
    while (N--) {
        int M, D;
        cin >> M >> D;

        int tot_days = 0;
        tot_days += D;

        while (M > 1) {
            tot_days += days[M - 1];
            M--;
        }

        int ans = (tot_days - 1) % 7;
        cout << v[ans] << '\n';
    }
}