#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (s[0] != EOF)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                cout << char(s[i] - 'A' + 'a');
            else if (s[i] >= 'a' && s[i] <= 'z')
                cout << char(s[i] - 'a' + 'A');
            else if (s[i] >= '0' && s[i] <= '9')
                cout << '*' << s[i];
            else if (s[i] == ' ')
                cout << '#';
            else
                cout << '?';
        }
        cout << endl;
        s.clear();
        getline(cin, s);
    }
    return 0;
}