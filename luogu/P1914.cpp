#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(long long unsigned int aaa=0;aaa<=s.size();aaa++)
        s[aaa]=(s[aaa]-'a'+n)%26+'a';
    cout<<s;
    return 0;
}