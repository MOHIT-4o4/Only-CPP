//Program to print employee's details after taking it from user
//Program created by Mohit Malviya
#include<iostream>
using namespace std;
class employee
{
    int id, emp_salary;
    string designation;
    string name;
  public:
  void get();
  void view();
};
void employee::get()
{
	cout<<"\t---Employee---\n";
    cout<< "\nEnter Member's name:" ;
    getline(cin, name);
    cout<< "\nEnter Member's designation :";
    getline(cin,designation);
    cout<< "\nEnter Member's id :";
    cin >> id;
  cout<< "\nEnter Member's emp salary :";
    cin>> emp_salary;
}
void employee::view()
{
  cout<< "\n\tEmployee's Details:-\n";
  cout<< "\n\t\tMember's name:" <<name<<endl;
  cout<< "\n\t\tMember's id :" <<id<<endl;
  cout<< "\n\t\tMember's designation :"<<designation<<endl;
  cout<< "\n\t\tMember's net salary :" << emp_salary<<endl;		
}
int main()
{
    employee m1;
    m1.get();
    m1.view();
	return 0;
}

