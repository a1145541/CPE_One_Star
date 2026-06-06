#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    double s ,a ;
    string x;
    double pi = acos(-1);
    while(cin>>s>>a>>x){
        if(x=="min") a = a/60;
        while(a > 360) a -= 360;
        while(a<0) a +=360;
        while(a>180) a = 360-a;
        cout<<fixed<< setprecision(6)<<2*pi*(6440+s)*a/360<<" "<<fixed<<setprecision(6)<<(6440 +s)*sin(a*pi/360)*2<<endl;
    }
}