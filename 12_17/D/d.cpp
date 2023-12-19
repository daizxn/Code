#include<iostream>
#include<algorithm>

using namespace std;

int a[100005],b[100005],c[100005],s[100005];
int n,k,L,R;

bool check(int mid);
int sum(int x);

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++){
        c[i]=a[i]-b[i];
        s[i]=s[i-1]+c[i];
    }
    sort(c+1,c+n+1);
    int ans=0x7ffffff;
    for(int i=1;i<=k;i++){
        int res;
        L=i,R=n-k+i-1;
        int l=c[L],r=c[R],mid;
        while(l<=r){
            mid=(l+r)>>1;
            if(check(mid)){
                res=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        int RES=sum(res+1);
        if(RES<ans)ans=RES;
    }
    cout<<ans;
}

int sum(int x){
    int pos=lower_bound(c+L,c+R,x)-c;
    return x*(pos-1-L+1)-(s[pos-1]-s[L-1])+s[R]-s[pos-1]-x*(R-pos+1);
}

bool check(int mid){
    int res1=sum(mid-1);
    int res=sum(mid);
    int res2=sum(mid+1);
    if(res1>res&&res>res2)return 1;
    else return 0;
}