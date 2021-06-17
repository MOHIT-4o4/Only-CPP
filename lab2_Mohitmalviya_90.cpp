#include<iostream>
using namespace std;

class Book
{
    private:
        int price;
        string m_title;
        string w_name;
    public:
    void getdet(void);
    void viewdet(void);
};

void Book::getdet(void)
        {
            cout<<"\nEnter the title of book:";
            getline(cin,m_title);
            cout<<"\nEnter the author's name:";
            getline(cin,w_name);
            cout<<"\nEnter the price of the book:";
            cin>>price;
        };


void Book::viewdet(void)
        {
            cout<< "\t---Book---\n";
            cout<<"\nThe title of book: ";
            cout<<m_title<<endl;
            cout<<"\nThe author's name: ";
            cout<<w_name<<endl;
            cout<<"\nThe price of the book: ";
            cout<<price<<endl;
        };

int main()
{
    Book b;
    cout<<"\t---book----\n";
    b.getdet();
    b.viewdet();

    return 0;
}