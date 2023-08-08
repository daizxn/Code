#include<bits/stdc++.h>
using namespace std;

char ss[30],ans[105];

int main(){
    int n;
    char t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x,y;
        scanf("%s",ss);
        if(isalpha(ss[0])){
            t=ss[0];
            scanf("%d%d",&x,&y);
        }
        else {
            x=atoi(ss);
            scanf("%d",&y);
        }
        switch(t){
            case 'a':
                sprintf(ans,"%d+%d=%d",x,y,x+y);
                break;
            case 'b':
                sprintf(ans,"%d-%d=%d",x,y,x-y);
                break;
            case 'c':
                sprintf(ans,"%d*%d=%d",x,y,x*y);

        }
        printf("%s\n%lld\n",ans,strlen(ans));  
    }
    return 0;
}