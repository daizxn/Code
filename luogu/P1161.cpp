#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double a;
        int b;
        cin >> a >> b;
        for (int j = 1; j <= b; j++)
            ans ^= int(j * a);
    }
    printf("%d", ans);
    return 0;
}