#include <bits/stdc++.h>
using namespace std;

const int need = 20000;
int main()
{
    int h, r;
    double v, pi = 3.14, ans;
    scanf("%d%d", &h, &r);
    v = pi * r * r * h;
    ans = need / v;
    ans = ceil(ans);
    cout << ans;
}