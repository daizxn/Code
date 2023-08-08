#include<bits/stdc++.h>
using namespace std;

int b[30];
bool vis[30];

bool sushu(int x){
	if(x==0||x==1) return false;
	if(x==2) return true;
	for(int j=2;j*j<=x;j++)
	{
		if(x%j==0) return false;
	}
	return true;
}

int main(){
    string s;
	int max=0,min=999;
	cin>>s;
	memset(vis,true,sizeof(vis));
	int n=s.size();
	for(int i=0;i<n;i++){
			b[s[i]-'a']++;
			vis[s[i]-'a'] =false;
		}
	for(int i=0;i<26;i++){
		if(b[i]>max&&vis[i]==false) max=b[i];
		if(b[i]<min&&vis[i]==false) min=b[i];
	}
	if(sushu(max-min)==false){
		cout<<"No Answer"<<endl;
		cout<<"0"<<endl;
	}
	else{
		cout<<"Lucky Word"<<endl;
		cout<<max-min<<endl;
	}
	return 0;
}
