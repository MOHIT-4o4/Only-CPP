#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, a, b;
    int tt = 0;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> a >> b;
        char s[n];
        for (i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        int zero_count = 0, one_count = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero_count++;
            }
            else if (s[i] == '1')
            {
                one_count++;
            }
            else
                break;
        }
        tt = (zero_count * a) + (one_count * b) ;
        cout << tt << endl;
    }

    return 0;
}