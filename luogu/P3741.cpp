#include<bits/stdc++.h>
using namespace std;

char a[105];

int main(){
    int n;
    int ans=0;
    scanf("%d\n%s",&n,a);
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]=='V'&&a[i+1]=='K'){
            a[i]=' ',a[i+1]=' ';
            ans++;
        }
    }
    for(int i=0;i<len;i++){
        if(a[i]==a[i+1]&&a[i]!=' '){
            ans++;
            break;
        }
    }
    printf("%d",ans);
}