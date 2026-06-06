#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int>hus(n);
        for(int i = 0;i<n;i++){
            cin>>hus[i];
        }
         sort(hus.begin(),hus.end());
         int m1 = hus[(n-1)/2];
         int m2 = hus[n/2];
         int count = 0;
         for(int i = 0;i<n;i++){
            if(hus[i]>=m1&&hus[i]<=m2){
                count++;
            }
         }
         cout<<m1<<" "<<count<<" "<<(m2-m1+1)<<endl;
    }
}