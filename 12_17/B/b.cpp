#include<iostream>

using namespace std;

int sum[100005];

int main(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        sum[i]=sum[i-1]^a;
    }
    for(int i=1;i<=q;i++){
        int l,r,ans;
        cin>>l>>r;
        ans=sum[r]^sum[l-1];
        cout<<ans<<endl;
    }
}