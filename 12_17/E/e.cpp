#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << -1;
        return 0;
    }
    int ans = n / 2;
    if (ans & 1)
    {
        cout << -1;
        return 0;
    }
    cout << ans;
    return 0;
}