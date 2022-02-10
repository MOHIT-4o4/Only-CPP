#include <iostream>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string g;
        cin >> g;
        if (k)
        {
            for (int i = 0; i < g.length(); i++)
            {
                if (g[i - n / 2] != g[n / 2 - n])
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
    }
}