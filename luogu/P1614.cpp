#include<bits/stdc++.h>
using namespace std;

int heart[10000];
int sum[10000];

int main(){
    memset(sum,0,sizeof sum);
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==0){
        cout<<0;
        return 0;
    }
   
    for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        sum[i]=sum[i-1]+t;
    }
    int ans=0x7ffffff;
    for(int i=m;i<=n;i++){
        ans=min(ans,sum[i]-sum[i-m]);
    }
    printf("%d\n",ans);
    return 0;
}