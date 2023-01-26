#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string str;
    int ascii1, ascii2;
    int sum1 = 0;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        ascii1 = str[i];
        if (ascii1 >= 97 && ascii1 <= 122)
        {
            ascii1 = toupper(str[i]);
            sum1 += ascii1;
        }
        else
        {
            ascii2 = tolower(str[i]);
            sum1 -= ascii2;
        }
    }
    if(sum1<0)
    sum1 = abs(sum1);
    
    cout << isPrime(sum1);
    return 0;
}