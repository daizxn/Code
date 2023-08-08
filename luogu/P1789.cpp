#include<bits/stdc++.h>
using namespace std;

int t[105][105];

int main(){
    memset(t,0,sizeof(0));
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        for(int a=x-1;a<=x+1;a++)
            for(int b=y-1;b<=y+1;b++)
                if(a>0&&b>0&&a<=n&&b<=n)
                    t[a][b]=1;
        if(x>2)t[x-2][y]=1;
        if(x+2<=n)t[x+2][y]=1;
        if(y>2)t[x][y-2]=1;
        if(y+2<=n)t[x][y+2]=1;       
    }
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        for(int a=x-2;a<=x+2;a++)
            for(int b=y-2;b<=y+2;b++)
                if(a>0&&b>0&&a<=n&&b<=n)
                    t[a][b]=1;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(!t[i][j])ans++;
    cout<<ans;
}