#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t;

    cin >> t;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int even = 0, odd = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even == 0 && odd > 0 or odd == 0 && even > 0)
    {
        cout<<-1;
    }
    else if (odd > 0 and even > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cout << arr[i] << " ";
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}