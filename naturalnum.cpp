 #include<iostream>
 using namespace std;
 int main()
 {
	 int i,j,num;
 
 cout << "enter the range\n";
 cin >> num;
 for (i=num;i>=0;i--)
 {
   for (j=1;j<=i;j++)
 	 cout << "*";
 	 cout << "\n";
 }
 return 0;
 }
