#include<iostream>
#include<cmath>

using namespace std;

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)return false;
    }
    return true;
}
int main(){
    for(int i=10000;i<=20000;i++){
        int t1=i/1000;
        int t2=i%100;
        if(isprime(t1)&&isprime(t2))
            cout<<i<<endl;
    }
}