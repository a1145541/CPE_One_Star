#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n1,n2;
        cin>>n1>>n2;
        if(n1<n2||(n1+n2)%2!=0){
            cout<<"impossible"<<endl;
        }
        else{
            int x = (n1+n2)/2;
            int y = abs(n1-n2)/2;
            cout<<x<<" "<<y<<endl;
        }
    }
}