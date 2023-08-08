#include<bits/stdc++.h>
using namespace std;

const int N=500;

struct node{
    int id;
    int sum;
    int chinese;
    int math;
    int english;
    void SUM(){
        sum=chinese+math+english;
    }
};

node student[N];

bool cmp(node a,node b){
    if(a.sum>b.sum)return 1;
    else if(a.sum<b.sum)return 0;
    else {
        if(a.chinese>b.chinese)return 1;
        else if(a.chinese<b.chinese)return 0;
        else {
             if(a.id>b.id)return 0;
             else return 1;
        }
    }
}


void print(int NUM){
    if(NUM>=5)NUM=5;
    for(int i=1;i<=NUM;i++){
        cout<<student[i].id<<' '<<student[i].sum<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>student[i].chinese>>student[i].math>>student[i].english;
        student[i].SUM();
        student[i].id=i;
    }
    sort(student+1,student+1+n,cmp);
    print(n);
}