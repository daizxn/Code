#include<bits/stdc++.h>
using namespace std;

int s[1000];

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            for(int k=1;k<+c;k++){
                int t=i+j+k;
                s[t]++;
            }
    int n=a+b+c;
    int ans=-1;
    int id;
    for(int i=1;i<=n;i++){
        if(s[i]>ans){
            ans=s[i];
            id=i;
        }
    }
    printf("%d\n",id);
}
