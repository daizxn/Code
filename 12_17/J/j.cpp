#include <iostream>

using namespace std;

int p[1005];
int fa[1005];

int find(int x)
{
    if (x != fa[x])
        fa[x] = find(fa[x]);
    return fa[x];
}

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> p[j];
            int fj = find(j);
            int fp = find(p[j]);
            if (fj != fp)
                fa[fj] = fp;
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
        int f_a = find(a);
        int f_b = find(b);
        if (f_a == f_b)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}