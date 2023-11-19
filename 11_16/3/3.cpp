#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

bool v[10005];

void bsort(int a[],int begin,int len){
	for(int i=0;i<len-1;i++)
		for(int j=0;j<len-i-1;j++){
			int k=j+begin;
			if(a[k]>a[k+1]){
				int temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	return;
}
int init(){
	int x;
	do{
		x=rand()%10000;
	}while(v[x]);
	return x;
}
int main(){
	srand(time(0));
	int a[105];
	for(int i=0;i<100;i++)a[i]=init();
	int begin,len;
	cout<<"start:";
	cin>>begin;
	cout<<"len:";
	cin>>len;
	bsort(a,begin,len);
	for(int i=begin;i<begin+len;i++)cout<<a[i]<<' ';
	 
}
