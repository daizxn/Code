#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int a[305][305];
int dp[305][305];
int val[305][305];
int n,m,k;

struct node {
    int x, y, mi;
};

int main(){
    memset(dp,0,sizeof dp);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
        }
}
