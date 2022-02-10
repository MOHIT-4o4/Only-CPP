#include <iostream>
using namespace std;

int main()
{
    int t, i, j;
    cin >> t;
    if (t < 36)
    {
        while (t--)
        {
            char da[3];
            char data[3];
            char x, y;
            for (i = 0; i < 3; i++)
            {
                cin >> da[i];
            }
            cin >> x >> y;
            for (i = 0; i < 3; i++)
            {
                if (da[i] == x)
                {
                    da[i] = data[i];
                    // cout << i << endl;
                }
                else if (da[i] == y)
                {
                    da[i] = data[i];
                    // cout << i << endl;
                }
            }
            cout << data[0];
        }
    }
}