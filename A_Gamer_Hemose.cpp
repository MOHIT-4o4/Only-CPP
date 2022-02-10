#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t, h;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int data[n];
        int x, y;
        int largest = 0, second_larg = 0, count = 0;
        cin >> h;
        for (i = 0; i < n; i++)
        {
            cin >> data[i];
        }
        sort(data, data + n);
        largest = data[n - 1];
        second_larg = data[n - 2];
        // for (i = 0; i < n; i++)
        // {
        //     // cout <<data[i]<<" ";
        //     // cout<<endl;

        // }
        // cout <<"Largest :"<<largest<<endl;
        // cout <<"Second largest: "<<second_larg<<endl;
        while (h)
        {
            x = h - largest;
            y = h - second_larg;
            if (x < 0 || x == 0)
            {
                count++;
            }
            else if (y < 0 || y == 0)
            {
                // h - second_larg;
                count++;
            }
            continue;
        }
        cout << count << endl;
    }
    return 0;
}