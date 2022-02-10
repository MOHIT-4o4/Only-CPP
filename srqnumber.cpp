#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i, n, diff = 0, count = 0;
    cin >> n;
    int data[n];

    for (i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    for (auto i : data){
        cout <<sqrt(data[i])<<endl;
    }
    cout << count;

    return 0;
}