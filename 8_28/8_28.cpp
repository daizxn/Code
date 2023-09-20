#include<bits/stdc++.h>
using namespace std;

int cnt[4];
string s1="GPLT";
string s2="GPLT";

void del(char ch){
    string::iterator it;
    for(it=s1.begin();it!=s1.end();it++){
        if(*it==ch){
            s1.erase(it);
            return;
        }
    }
}
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        for(int j=0;j<4;j++)
            if(s[i]==s1[j]||s[i]==(s1[j]+32))
                cnt[j]++;
    int minn,id;
     for(int t=0;t<4;t++){
        minn=100001;
        for(int i=0;i<4;i++)
            if(cnt[i]<minn){
                minn=cnt[i];
                id=i;
            }
        for(int i=0;i<minn;i++)
            cout<<s1;
        for(int i=0;i<4;i++)
            cnt[i]-=minn;
        cnt[id]=10000000;
        del(s2[id]);
     }   
//     system("pause");
    return 0;
}