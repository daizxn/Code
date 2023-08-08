#include<bits/stdc++.h>
using namespace std;

string a;
int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4}; 

int main(){
    int ans=0;
    getline(cin,a);
    for(unsigned long long int i=0;i<a.size();i++)
        if(a[i]<='z'&&a[i]>='a')
            ans+=num[a[i]-'a'];
        else if(a[i]==' ')
            ans++;
    printf("%d",ans);
    return 0;
}