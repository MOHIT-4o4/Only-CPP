#include<iostream>
using namespace std;
int main()
{
	int i,num,j;
	
	cout << "enter the number of rows : ";
	cin >> num;
	for(i=1;i<=num;i++)
	{ 	for (j=1;j<=i;j++)
	   cout << j << " " ;
	   cout << "\n";
	}

return 0;
}
