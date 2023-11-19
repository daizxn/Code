#include<iostream>

using namespace std;

int a[25][25];

int main(){
	int cnt=1,tx=1,ty=1;
	int x=1,y=1;
	int n;
	cin>>n;
	for(int i=1;i<=n*n;i++){
		a[y][x]=cnt++;
		x-=1;y+=1;
		if(x<1&&y>n){
			x=tx;
			y=++ty;
		}
		else if(x<1){
			x=++tx;
			y=ty;
		}
		else if(y>n){
			x=tx;
			y=++ty;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<' ';
			cout<<endl;
	}
	return 0;
} 
