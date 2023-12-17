#include <iostream>
#include<string>
using namespace std;

void dtob(int num);
string dtob_re(int num);

int main()
{
    int n;
    cin >> n;
    dtob(n);
    cout<<dtob_re(n);
}

void dtob(int num)
{
    int a[100], cnt = 0;
    while (num)
    {
        a[++cnt] = num & 1;
        num >>= 1;
    }
    for (int i = cnt; i >= 1; i--)
        cout << a[i];
    cout << endl;
}

string dtob_re(int num){
    if(!num)return "";
    if(num&1)
        return dtob_re(num>>1)+'1';
    else
        return dtob_re(num>>1)+'0';
}
