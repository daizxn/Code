#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>
using namespace std;

int a[25],b[25],v[205];
bool va[205],vb[205];

int init_a(){
	int x;
	do{
		x=rand()%201;
	}while(va[x]);
	return x;
}
int init_b(){
	int x;
	do{
		x=rand()%201;
	}while(vb[x]);
	return x;
}

int main(){
	srand(time(0));
	memset(v,0,sizeof(v));
	for(int i=1;i<=20;i++){
		a[i]=init_a();
		b[i]=init_b();
		v[a[i]]++;
		v[b[i]]++;
	}
	for(int i=0;i<=200;i++)
		if(v[i]==2)cout<<i<<' ';
		cout<<endl;
	// for(int i=0;i<=200;i++)
	// 	if(v[i])cout<<i<<' ';
	// 	cout<<endl;
		return 0;
}
