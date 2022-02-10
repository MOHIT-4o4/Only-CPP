#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i,rem, l;
    int result=0;
    cin >> n;
    cin >> l;
    int data[n];
    for (i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    for (i = 0; i < n; i++)
    {
        rem = (l + data[i]) % data[i];
        // result = l + data[i] - rem;
        if (rem == 0)
            data[i++];
        else
            return l + data[i] - rem;
    }
}