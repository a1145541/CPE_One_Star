#include<iostream>
#include<string>
using namespace std;

int main(){
	int m,n;
	int count=1;
	while(cin>>m>>n&&(m!=0||n!=0)){
		char arr[100][100];
		int ans[100][100];
		for(int i=0;i<m;i++){
			string s;
			cin>>s;
			for(int j=0;j<n;j++){
				arr[i][j]=s[j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j]=='*'){
					ans[i][j]=9;
				}
				else{
					ans[i][j]=0;
					if(i+1<m&&arr[i+1][j]=='*')ans[i][j]++;
					if(i+1<m&&j>0&&arr[i+1][j-1]=='*')ans[i][j]++;
					if(i>0&&j>0&&arr[i-1][j-1]=='*')ans[i][j]++;
					if(j>0&&arr[i][j-1]=='*')ans[i][j]++;
					if(i+1<m&&j+1<n&&arr[i+1][j+1]=='*')ans[i][j]++;
					if(i>0&&j+1<n&&arr[i-1][j+1]=='*')ans[i][j]++;
					if(j+1<n&&arr[i][j+1]=='*')ans[i][j]++;
					if(i>0&&arr[i-1][j]=='*')ans[i][j]++;
				}
			}
		}
		if(count>1)cout<<endl;
		cout<<"Field #"<<count<<":"<<endl;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(ans[i][j]==9)cout<<"*";
				else cout<<ans[i][j];
			}
			cout<<endl;
		}
		count++;
	}
}