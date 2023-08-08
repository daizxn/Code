#include<bits/stdc++.h>
using namespace std;

string s1,s2;

int main(){
    getline(cin,s1);
    getline(cin,s2);
    for(long long unsigned int i=0;i<s1.size();i++)
        s1[i]=toupper(s1[i]);
    for(long long unsigned int i=0;i<s2.size();i++)
        s2[i]=toupper(s2[i]);
    s1=' '+s1+' ';
    s2=' '+s2+' ';
    if(s2.find(s1)==string::npos){
        cout<<-1<<endl;
        return 0;
    }
    else{
        int cnt=0;
        long long unsigned int t,first;
        first=s2.find(s1);
        t=first;
        while(t!=string::npos){
            cnt++;
            t=s2.find(s1,t+1);
        }
        cout<<cnt<<' '<<first;
    }
    return 0;
}