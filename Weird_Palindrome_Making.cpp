#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i, total = 0;
        cin >> n;
        for(i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp%2!=0){
                total++;
            }
        }
        if(total%2!=0){
            total --;
        }
        cout <<total/2<<endl;
        
    }
}