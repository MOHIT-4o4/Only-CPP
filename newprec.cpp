
// https://codeforces.com/contest/1041/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = 0, mi = 1e9 + 7;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mi = min(mi, arr[i]);
        mx = max(mx, arr[i]);
    }
    // cout << mx << " " << mi << endl;
    cout << abs(n - (mx- (mi-1)));
}