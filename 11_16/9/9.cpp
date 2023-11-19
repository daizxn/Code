#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int i=2;
    while(i<s.size()){
        int t=0;
        if(s[i-2]=='0'&&s[i-1]=='x'){
            while(s[i]>='a'&&s[i]<'f'||s[i]>'0'&&s[i]<'9'){
                if(s[i]=='0'&&s[i+1]=='x')break;
                if(s[i]>'0'&&s[i]<'9')t=t*16+s[i]-'0';
                else t=t*16+s[i]-'a'+10;
                i++;
            }
        }
        if(t)cout<<t<<' ';
        i++;
    }
}