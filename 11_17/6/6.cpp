#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    while (str[0] != EOF)
    {
        int d = 0, b = 0, s = 0, k = 0, t = 0;
        for (int i = 0; i < str.size(); i++)
            if (str[i] >= 'A' && str[i] <= 'Z')
                b++;
            else if (str[i] >= 'a' && str[i] <= 'z')
                s++;
            else if (str[i] >= '0' && str[i] <= '9')
                d++;
            else if (str[i] == ' ')
                k++;
            else
                t++;
        cout << 'D' << d << 'B' << b << 'S' << s << 'K' << k << 'T' << t << endl;
        str.clear();
        getline(cin, str);
    }
    return 0;
}