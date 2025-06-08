// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int countFirstIndex = 0, countLastIndex = 0, n, x;
        cin >> n >> x;
        int a[11]; 

        for (int j = 1; j <= n; j++)
        {
            cin >> a[j];
        }

        for (int j = 1; j <= n; j++)
        {
            if (a[j] == 1)
            {
                countFirstIndex = j;
                break;
            }
        }

        for (int j = n; j >= 1; j--)
        {
            if (a[j] == 1)
            {
                countLastIndex = j;
                break;
            }
        }

        if ((countLastIndex - countFirstIndex + 1) <= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
