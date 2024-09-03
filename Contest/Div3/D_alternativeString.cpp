#include <iostream>
#include <string>
using namespace std;

int alternateString(string s)
{
    int n = s.size();
    int changes1 = 0, changes2 = 0;

    for (int i = 0; i < n; i += 2)
    {
        if (s[i] != s[0])
            changes1++;
    }
    for (int i = 1; i < n; i += 2)
    {
        if (s[i] != s[1])
            changes1++;
    }

    for (int i = 1; i < n; i += 2)
    {
        if (s[i] != s[1])
            changes2++;
    }
    for (int i = 2; i < n; i += 2)
    {
        if (s[i] != s[2])
            changes2++;
    }

    return min(changes1, changes2 + 1);
}

int main()
{

    int x, l, r;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 != 0)
        {
            s = s.substr(1);
        }

        cout << alternateString(s) << endl;
    }

    return 0;
}