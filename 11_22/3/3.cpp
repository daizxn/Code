#include <iostream>

using namespace std;

const int inf = 0x7fffffff;

int main()
{
    int min[10], max[10], a[10][10];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        min[i] = inf;
        max[i] = -inf;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > max[i])
                max[i] = a[i][j];
            if (a[i][j] < min[j])
                min[j] = a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (max[i] == min[j])
            {
                cout << "the point: (" << i << ',' << j << ") "
                     << "value: " << a[i][j] << endl;
            }
        }
    return 0;
}