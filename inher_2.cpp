
#include<iostream>
#include<string>
using namespace std;

class shape//i.e. BASE CLASS
{ 
public : 
    void setwidth()
{
    int w;
    cin >> w;
    width = w;
}
    void setheight()
{
     int h;
     cin >> h;
     height =h;
}
protected ://Specifier
    int width;
    int height;

};

class rest : public shape //derived class
{ public :
    int getarea()
    {
        return (width * height);
    }
    
};

int main()
{
 rest rect;
 rect.setwidth();
 rect.setheight();
 cout << "Total Area:"<< rect.getarea()<<endl;
 return 0;

}