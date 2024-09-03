// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

bool isSquareMatrix(const string &s, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '1' || s[(n - 1) * n + i] != '1')
        {
            return false;
        }
    }

    
    for (int i = 0; i < n; i++)
    {
        if (s[i * n] != '1' || s[i * n + (n - 1)] != '1')
        {
            return false;
        }
    }

    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; j < n - 1; ++j)
        {
            if (s[i * n + j] != '0')
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{

    int x, length;
    cin >> x;
    string str;

    for (int i = 1; i <= x; i++)
    {
        cin >> length;
        cin >> str;

        if (str.length() != length)
        {
            cout << "No" << endl;
            continue;
        }

        double sqrtLength = sqrt(length);
        if (sqrtLength == floor(sqrtLength))
        {
            int n = static_cast<int>(sqrtLength);
            if (isSquareMatrix(str, n))
            {
                cout << "Yes" << endl;
            }
            else
            {
                if (length == 4 && str[0] == '1' && str[1] == '1' && str[2] == '1' && str[3] == '1')
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}