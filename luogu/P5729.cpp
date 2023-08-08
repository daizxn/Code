#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y,z;
};

int m[20][20][20];
int v=0;

void CUT(point a,point b) {
    for(int i=a.x;i<=b.x;i++)
        for(int j=a.y;j<=b.y;j++)
            for(int k=a.z;k<=b.z;k++)
                if(m[i][j][k]==0){
                    m[i][j][k]=1;
                    v--;
                }
                else continue;
    return;
}

int main(){
    memset(m,0,sizeof m);
    int w,x,h,q;
    scanf("%d%d%d\n%d",&w,&x,&h,&q);
    
    v=w*x*h;
    point a;
    point b;
    for(int i=1;i<=q;i++){
        cin>>a.x>>a.y>>a.z;
        cin>>b.x>>b.y>>b.z;
        CUT(a,b);
    }
    cout<<v;

}