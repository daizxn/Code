#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int a[100005],b[100005];
int suma[100005],sumb[100005];
int k,m;

bool check(int x);

int main(){
    memset(suma,0,sizeof suma);
    memset(sumb,0,sizeof sumb);
    int n,q;
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
        cin>>k>>m;
        int l=1,r=m,mid;
        int ans;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid)){
                l=mid+1;
                ans=mid;
            }
            else r=mid-1;
        }
        int res1=suma[m-ans]+2*k*ans+sumb[ans];
        int res2=sumb[m-ans+1]+2*k*(ans-1)+sumb[ans-1];
        if(res1>res2)cout<<res2<<endl;
        else cout<<res1<<endl;
    }
}

bool check(int x){
    if(k-a[m-x]>0)
        if(a[m-x]>b[x]+2*k)
            return 1;
    return 0;
}