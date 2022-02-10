// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    x = sizeof(data)/sizeof(data[0]);
    sort(data,data+x);

    
    for (int i = 0; i < n; i++)
    {
        cout << data[i]<<" ";
    }

    return 0;
}
