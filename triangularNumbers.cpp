#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, i, count = 0;
    cin >> number;
    if (number == 1 || number == 0)
    {
        cout << "YES" << endl;
    }

    else
    {

        for (i = 1; i < number; i++)
        {
            count += i;
            if (count == number)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (number == i)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}