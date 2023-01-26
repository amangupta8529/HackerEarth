#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int decimal = 0;
        for (int i = 0; i < n; i++)
        {
            int convert = str[i] - '0';
            decimal += convert * pow(2, n - 1 - i);
        }
       cout << decimal << endl;
    }

    return 0;
}