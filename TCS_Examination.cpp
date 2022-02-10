#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dsa, toc, dm;
        int dsa2, toc2, dm2;
        int total_score_dragon = 0;
        int total_score_sloth = 0;

        cin >> dsa >> toc >> dm;
        cin >> dsa2 >> toc2 >> dm2;
        total_score_dragon = dsa + toc + dm;
        total_score_sloth = dsa2 + toc2 + dm2;

        // cout << "Sloth total score : " << total_score_sloth << endl;
        // cout << "Dragon total score : " << total_score_dragon << endl;
        if (total_score_dragon == total_score_sloth && dsa > dsa2)
        {
            cout << "DRAGON" << endl;
        }
        else if ((total_score_dragon == total_score_sloth && dsa == dsa2) && toc > toc2)
        {
            cout << "DRAGON" << endl;
        }
        else if ((total_score_dragon == total_score_sloth && dsa == dsa2) && toc == toc2)
        {
            cout << "TIE" << endl;
        }
        else if (total_score_dragon > total_score_sloth)
        {
            cout << "DRAGON" << endl;
        }
        else
            cout << "SLOTH" << endl;
        
    }
        return 0;

    }