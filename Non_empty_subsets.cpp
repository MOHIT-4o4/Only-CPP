#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int data[n];
        for (i = 0; i < n; i++)
        {
            cin >> data[i];
        }
        sort(data, data + n);
        for (i = 0; i < n; i++)
        {
            cout << data[i] << " ";
        }
    }
    return 0;
}