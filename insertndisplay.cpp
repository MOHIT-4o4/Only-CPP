#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void printinglist(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}
void insert2last(int x, node *&head)
{
    node *lastnode = new node(x);
    node *tmp2;
    // lastnode->data = x;
    // lastnode->next = NULL;
    while (tmp2->next != NULL)
    {
        tmp2 = tmp2->next;
    }
    tmp2->next = lastnode;
    cout << x << " Node inserted at last \n";
}
void insert2head(int x, node *&head)
{
    node *newnode = new node(x);
    // newnode->data = x;
    // newnode->next = head;
    head = newnode;
    cout << x << " Node inserted at head\n";
}
void deletehead(node *&head)
{
    node *tr = head;
    // head = head->next;
    delete tr;
    cout << "Head removed\n";
}

void deletelastnode(node *&head)
{
    node *tt = head;
    while (tt->next->next != NULL)
    {
        tt = tt->next;
    }
    tt->next = NULL;
    cout << "last node deleted'\n";
}

int main()
{

    node *head = NULL;

    // head->data = 20;
    // head->next = NULL;
    // printinglist(head);

    // printinglist(head);
    insert2head(12, head);
    insert2head(23, head);
    insert2last(45, head);

    printinglist(head);
    deletelastnode(head);
    printinglist(head);
}