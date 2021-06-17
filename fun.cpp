#include<iostream>
using namespace std;
class Person{
    int age=0;
    public:

        Person(int initialAge);
        void amIOld(void);
        void yearPasses(void);
    };

    Person::Person(int initialAge)
    {
        int t;
        cin >> t;
        for (int i=1;i<=t;i++)
            cin >> age;
    }

    void Person::amIOld(void)
{

     if (age>1)
    {
        if(age<13)
        cout << "You are young.."<<endl;
     else if (age<18 && age>=13)
        cout << "You are a teenager.."<<endl;
     else
        cout << "You are old.."<<endl;
    }
    else
        cout << "Age is not valid, setting age to 0.";
}
           
    void Person::yearPasses(void){

    }
int main()
{
    Person p ;
    p.initialAge();
    p.amIOld();
    p.yearPasses();
    return 0;
    }
