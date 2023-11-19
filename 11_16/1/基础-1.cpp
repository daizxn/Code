#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>

using namespace std;

int a[105];

int main(){
	srand(time(0));
	int max=-1,min=100000;
	int maxi=-1,mini=-1;
	for(int i=1;i<=100;i++){
		a[i]=rand()%10000+1;
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
		if(a[i]<min){
			min=a[i];
			mini=i;
		}
	}
//	for(int i=1;i<=100;i++)cout<<a[i]<<' ';
//	cout<<endl;
	cout<<max<<' '<<maxi<<endl;
	cout<<min<<' '<<mini<<endl;	
	return 0;
} 

