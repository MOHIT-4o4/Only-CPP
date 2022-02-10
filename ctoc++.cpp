#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
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

void insert2last(int x ,node *&head){
    node *lastnode = new node();
    node *tmp;
    lastnode->data= x;
    lastnode->next = NULL;
    while(tmp->next !=NULL){
        tmp = tmp->next;
    }
    tmp->next = lastnode ; 
    cout <<x<<" Last node inserted\n";
}
void insert2head(int x, node *&head)
{
    node *newnode = new node();
    newnode->data = x;
    newnode->next = head;
    head = newnode;
    cout << "Node " << x << " inserted\n";
}

void removelast(node *&head){
    node *t2  = head;

    while(t2->next->next!=NULL){
        t2= t2->next;
    }
    t2->next = NULL;
    cout<<"last node removed\n";
}
int main()
{
    node *head = NULL;
    
    insert2head(12, head);
    insert2head(115, head);
    insert2head(4352,head);
    printinglist(head);
    printinglist(head);
    insert2head(64, head);
    printinglist(head);
    removelast(head);
    // insert2last(234,head);
    printinglist(head);
}