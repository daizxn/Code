#include <iostream>
#include <algorithm>
using namespace std;

struct room
{
    int id, person;
    bool operator<(const room &x)
    {
        return id < x.id;
    }
} a[15];

int main()
{
    int n;
    cin >> n;
    while (n != EOF)
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i].person;
            a[i].id = (i + n) % 10;
        }
        sort(a, a + 10);
        for (int i = 0; i < 10; i++)
            cout << a[i].person << ' ';
        cin >> n;
    }
    return 0;
}