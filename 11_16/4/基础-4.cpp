//odd even
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int a[10][10];

int main(){
	srand(time(0));
	int odd=0,even=0;
	for(int i=1;i<=6;i++)
		for(int j=1;j<=6;j++){
			a[i][j]=rand()%100+1;
			if(a[i][j]&1)odd+=a[i][j];
			else even+=a[i][j];
		}
	cout<<"mtx:"<<endl;
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++)
			cout<<a[i][j]<<' ';
			cout<<endl;
	}
	cout<<"the sum of odd:     "<<odd<<endl;
	cout<<"the sum of even:    "<<even<<endl;
	return 0;
}
