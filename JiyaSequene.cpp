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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int multiply = 1;
        for (int i = 0; i < n; i++)
        {
            multiply = multiply * arr[i];
        }
        if (multiply % 10 == 2 || multiply % 10 == 3 || multiply % 10 == 5){
            cout << "YES"<<endl;
        }
        else 
        cout << "NO"<<endl;
    }
    return 0;
}