#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main(){
    int cnt=0;
    for(int i=100;i<=999;i++){
        cnt++;
        int temp=i,sum=0;
        while(temp){
            int x=temp%10;
            sum+=x*x*x;
            temp/=10;
        }
        if(sum==i){
            cout<<i<<' ';
            if(cnt==5){
                cnt=0;
                cout<<endl;
            }
        }
    }
    return 0;
}