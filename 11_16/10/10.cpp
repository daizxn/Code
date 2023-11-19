#include<iostream>
#include<algorithm>

using namespace std;

struct node{
    int id,num;
    bool operator<(const node& x){
        return num>x.num;
    }
};

node a[15];

int main(){
    int n;
    cin>>n;
    while(n!=EOF){
        for(int i=1;i<=10;i++){
            cin>>a[i].num;
            a[i].id=i;
        }
        for(int i=1;i<=n;i++){
            int op;
            cin>>op;
            if(!op){
                for(int i=1;i<=10;i++){
                    int t=int(0.01*a[i].num+0.5);
                    a[i].num-=t;
                    if(a[i].num<50)a[i].num+=200;
                }
            }
            else{
                for(int i=1;i<=10;i++){
                    int t=int(0.1*a[i].num+0.5);
                    a[i].num-=t;
                    if(a[i].num<50)a[i].num+=200;
                }
            }
        }
        sort(a+1,a+11);
        for(int i=1;i<=10;i++){
            cout<<a[i].id<<':'<<a[i].num<<' ';
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}