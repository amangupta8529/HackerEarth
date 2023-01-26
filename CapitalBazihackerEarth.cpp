#include <bits/stdc++.h>
using namespace std;

void uppercase(string &s1)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == ' ')
        {
            cout << endl;
        }
        else
            cout << s1[i];
    }
}
int main()
{
    string s;
    getline(cin, s);
    uppercase(s);
    return 0;
}