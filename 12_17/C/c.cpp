#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int a[100005],b[100005];
int suma[100005],sumb[100005];
int n,q;

bool check(int x,int k,int m);

int main(){
    memset(suma,0,sizeof suma);
    memset(sumb,0,sizeof sumb);
    
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=-a[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        suma[i]=suma[i-1]+a[i];
        sumb[i]=sumb[i-1]+b[i];
    }
    for(int i=1;i<=q;i++){
        int k,m;
        cin>>k>>m;
        int l=1,r=m,mid;
        int ans=0;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid,k,m)){
                l=mid+1;
                ans=mid;
            }
            else r=mid-1;
        }
        int res1=0x7fffffff,res2=0x7fffffff;
        res1=suma[m-ans]+2*k*ans+sumb[ans];
        if(ans>0)res2=suma[m-ans+1]+2*k*(ans-1)+sumb[ans-1];
        if(res1>res2)cout<<res2<<endl;
        else cout<<res1<<endl;
    }
}

bool check(int x,int k,int m){
    if(a[n-x+1]-k>0)
        if(a[n-x+1]>(b[x]+2*k))
            return 1;
    return 0;
}