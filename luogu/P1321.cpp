#include<bits/stdc++.h>
using namespace std;

int main(){
    int b=0,g=0;
    string s;
    cin>>s;
    for(unsigned long long int i=0;i<s.length();i++){
        if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y')
            b++;
        if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l')
            g++;
    }
    cout<<b<<endl<<g<<endl;
    return 0;
}