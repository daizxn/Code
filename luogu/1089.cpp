#include<bits/stdc++.h>
using namespace std;

int main(){
    int budget;
    int money=0;
    int save=0;
    int flag=0;
    for(int i=1;i<=12;i++){
        cin>>budget;
        if(!flag){
            money+=300;
            money-=budget;
            if(money<0){
                flag=i;
            }
            save+=money/100;
            money%=100;
        }
    }
    if(flag)cout<<-flag<<endl;
    else {
        money+=120*save;
        cout<<money<<endl;
    }
}
// 290
// 230
// 280
// 200
// 300
// 170
// 340
// 50 
// 90 
// 80 
// 200
// 60 
