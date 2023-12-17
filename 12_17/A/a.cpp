#include <iostream>

using namespace std;

bool v[10];

void solve(int l, int r);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;
        solve(l, r);
    }
}

void solve(int l, int r)
{
    for (int i = 0; i <= 9; i++)
        v[i] = 0;
    if ((r - l) >= 9)
    {
        cout << "Yes" << endl;
        return;
    }
    else
    {
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            int t = i;
            while (t)
            {
                int a = t % 10;
                t /= 10;
                if (!v[a])
                {
                    v[a] = 1;
                    sum++;
                }
            } 
            if (sum >= 10)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
    return;
}