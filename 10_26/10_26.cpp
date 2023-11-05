#include <stdio.h>

int max(int a,int b){
    return a>b?a:b;
}

int main(){
    long t;
    scanf("%ld", &t);
    for (long i = 0; i < t; i++)
    {
        long num;
        scanf("%ld", &num);
        long li[1000005] = {0};
        long sum = 0;
        for (long j = 0; j < num; j++)
        {
            scanf("%ld", &li[j]);
            sum += li[j];
        }
        long selection = -1;
        long k = -1;
        int flag = 1;
        while (sum > 0)
        {
            selection = (selection + 1) % num;
            if (li[selection] == 0)
                continue;
            else
            {
                if (k == selection)
                {
                    printf("No\n");
                    flag = 0;
                    break;
                }
                li[selection] -= 1;
                sum--;
                k = selection;
            }
        }
        if (flag)
            printf("Yes\n");
    }
    return 0;
}