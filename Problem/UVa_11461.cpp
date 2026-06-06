#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b&&(a!=0||b!=0)){
        int count = (int)sqrt(b)-(int)sqrt(a-1);
        cout<<count<<endl;
    }
}