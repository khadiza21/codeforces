//  https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int num[105];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int easy = 1;

    for (int i = 0; i < n; i++)
    {
        // cout<<num[i];
        if (num[i] == 1)
        {
            easy = 0;
        }
    }

    if (easy == 0)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}