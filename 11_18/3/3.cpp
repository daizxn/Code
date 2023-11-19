#include <iostream>
#include <string.h>
using namespace std;

int a[15], b[15];

int main()
{
    for (int i = 0; i <= 9; i++)
        cin >> a[i];
    for (int i = 0; i <= 9; i++)
        b[9 - i] = a[i];
    for (int i = 0; i <= 9; i++)
        a[i] = b[i];
    for (int i = 0; i <= 9; i++)
        cout << a[i] << ' ';
    return 0;
}