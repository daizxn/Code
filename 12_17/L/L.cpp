// #include <iostream>
// #include <algorithm>
// #include<cstring>
#include<bits/stdc++.h>
using namespace std;

#define mod 998244353

const int N = 1e6 + 5;

long long maxn[N], minn[N], sumn[N];
long long a[N];

long long pow(long long x, int b)
{
    long long sum = 1;
    while (b > 0)
    {
        if (b & 1)
            sum = (sum * x )% mod;
        x = (x * x) % mod;
        b = b >> 1;
    }
    return sum;
}

int main()
{
    memset(sumn,0,sizeof sumn);
    // freopen("a.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        maxn[i]=pow(a[i],k);
    long long ans=0;
    for(int i=2;i<=n;i++){
        sumn[i-1]=((sumn[i-2]*2)%mod+a[i-1])%mod;
        ans=(ans+((maxn[i]*sumn[i-1])%mod))%mod;
    }
    for(int i=1;i<=n;i++)
        ans=(ans+((maxn[i]*a[i])%mod))%mod;
    cout<<ans;

}