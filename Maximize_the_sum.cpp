#include <iostream>

using namespace std;

int main()
{
    int a1, a2, b1, b2;
    
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    int data1[a1][b1], data2[a2][b2];

    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b1; j++)
        {
            cin >> data1[i][j];
        }
    }
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b1; j++)
        {
            cout << data1[i][j];
        }
    }

    return 0;
}