#include<bits/stdc++.h>
using namespace std;

int a[1000005];

int main(){
    freopen("a.txt","w",stdout);
    srand(time(0));
    int n=(rand()%(1000000-100000))+10;
    int k=(rand()%(1000000000-10))+10;
    for(int i=1;i<=n;i++)a[i]=(rand()%(1000000000-10))+10;
    cout<<n<<' '<<k<<endl;
    for(int i=1;i<=n;i++)cout<<a[i]<<' ';
}