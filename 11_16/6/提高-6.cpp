#include<iostream>
#include<cstring>

using namespace std;

int a[105],b[105],ans[105];

int main(){
	memset(b,0,sizeof b);
	int n;
	cout<<"n:";
	cin>>n;
	cout<<"A:";
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]>a[j])b[i]++;
			else b[j]++;
	for(int i=1;i<=n;i++)ans[b[i]]=a[i];
	for(int i=0;i<n;i++)cout<<ans[i]<<' ';
	cout<<endl;
	return 0;
} 
