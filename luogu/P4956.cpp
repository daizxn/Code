//x 364 k 1092;

#include<bits/stdc++.h>
using namespace std;

const int X=364;
const int K=1092;

int main(){
    int n;
    scanf("%d",&n);
    n/=364;
    if(n<=103){
        n-=3;
        printf("%d\n1",n);
    }
    else if(n%3==0)printf("%d\n%d",99,(n-99)/3);
    else if(n%3==1)printf("%d\n%d",100,(n-100)/3);
    else printf("%d\n%d",98,(n-98)/3);
}