#include<iostream>

using namespace std;

int main()
{
	int sum[20][20],a[20][20],i,j,b[20][20];
	
	cout << "Enter the elment of the first matrx :";
	for(i=1;i<=2;i++)
	{for(j=1;j<=i;j++)
		cin >> a[i][j];
	}
	cout << "Enter the element of the second matrix : ";
	for(i=1;i<=2;i++){
		for (j=1;j<=i;j++)
		cin >> b[i][j];
	}
	
	for(i=1;i<=2;i++)
	{
		for (j=1;j<=i;j++)
		sum[i][j] =  a[i][j] + b[i][j] ;
	}
	cout << "the sum of the two matrix is :";
	
	for (i=1;i<=2;i++)
	{	 for (j=1;j<=i;j++)
		  cout << sum [i][j] << "\n";
	}
	
	return 0;
	}
