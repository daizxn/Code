#include <iostream>

using namespace std;

int main()
{
    int a[10] = {11, 55, 77, 123, 234, 666};
    int num;
    cin >> num;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > num)
        {
            int temp = a[i];
            a[i] = num;
            num = temp;
        }
    }
    a[6] = num;
    for (int i = 0; i < 7; i++)
        cout << a[i] << ' ';
}
