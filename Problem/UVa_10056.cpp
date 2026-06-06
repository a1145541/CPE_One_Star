#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int x;
    if(!(cin>>x)) return 0;
    while(x--){
        int n,c;
        double p;
        cin>>n>>p>>c;
        if(p<0.0000001){
            cout<<"0.0000"<<endl;
            continue;
        }
        double q = 1.0 - p;
        double a = pow(q,c-1)*p;
        double r = pow(q,n);
        double ans = a/(1.0-r);
        cout<<fixed<<setprecision(4)<<ans<<endl;
    }
}