#include<iostream>
#include<string>
#include<vector>
using namespace std;

int fun(unsigned num);
void fun2(unsigned num);
int main(){
    int a,b;
    while(cin>>a>>b){
        fun2(a);
        if(fun(a)==b&&fun(b)==a)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

int fun(unsigned num){
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    return sum;
}
void fun2(unsigned num){
    vector<int> v;
    cout<<num<<'='<<1;
    int i=2;
    while(num>1){
        if(num%i==0){
            v.push_back(i);
            num/=i;
        }
        else 
            i++;
    }
    for(int i=0;i<v.size();i++)
        cout<<'*'<<v[i];
        cout<<endl;
}
