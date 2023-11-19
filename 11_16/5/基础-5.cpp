#include<iostream>

using namespace std;

int a[1000][10000];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1||j==i)
				a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
			for(int k=1;k<=a[i][j];k++){
				cout<<'A';
			}
			cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
