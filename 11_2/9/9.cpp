#include<iostream>
using namespace std;

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    int y,m,d;
    cin>>y>>m>>d;
    y;m;
    int sum=d;
    sum+=365*(y-1)+(y-1)/4-(y-1)/100+(y-1)/400;    
    for(int i=1;i<m;i++)sum+=month[i];    
    if((!(y%4)&&(y%100)||!(y%400))&&m>2)sum++;  
    switch(sum%7){
        case 0:cout<<"Sunday"<<endl;break;
        case 1:cout<<"Monday"<<endl;break;
        case 2:cout<<"Thuesday"<<endl;break;
        case 3:cout<<"Wednesday"<<endl;break;
        case 4:cout<<"Thursday"<<endl;break;
        case 5:cout<<"Friday"<<endl;break;
        case 6:cout<<"Saturday"<<endl;break;
    }
}