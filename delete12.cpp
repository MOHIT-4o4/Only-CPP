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

void insert(int val, node *&head)
{

    node *newnode = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    //cout << "inserted";
}

void del(node *&head)
{
   node *temp = head;
      while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void del_by_val(int val, node *&head){



}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    insert(1, head);
    
    insert(2, head);
    insert(3, head);
    insert(4, head);
    display(head);

    del(head);
    cout<<endl;
    display(head);
}
