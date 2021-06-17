#include<iostream>
#include<string>
using namespace std;

class shape //BASE SHAPE CLASS
{
    public : 
    void getheight()
    {
        int h;
        cin >> h;
    }
    void getweight()
    {
        int w;
        cin >> w;
    }
    protected :
    int height ;
    int weight;
};

class pencost //BASE PENCOST CLASS
{
    public :
     int getcost(int area)
     {
         
         return area * 70;
     }
};
class rectan : public shape , public pencost
{
 public : 
    int getarea()
    {
        return (height * weight);
    }
};


int main()
{  
    rectan rect;
int area;
    rect.getheight();
    rect.getweight();
area = rect.getarea();
    cout << "the area is :"<<area <<endl;
    cout << "Pen cost :" << rect.getcost(area);
    return 0;
}