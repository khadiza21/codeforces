#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;
    cin >> num;
    string stateMent;
    for (int i = 1; i <= num; i++)
    {
        cin >> stateMent;
        if (stateMent == "++x" || stateMent == "x++" || stateMent == "X++" || stateMent == "++X")
        {
            sum++;
        }
        else
        {
            sum--;
        }
    }

      cout << sum << endl;
   

    return 0;
}
