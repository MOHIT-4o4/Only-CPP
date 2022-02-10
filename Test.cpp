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

void insert(int val, node *&start)
{
    node *newnode = new node(val);
    if (start == NULL)
    {
        start = newnode;
        return;
    }
    node *temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void disp(node *start)
{
    while (start != NULL)
    {
        cout << start->data << endl;
        start = start->next;
    }
    cout << "--> NULL";
}
// delete node
void lastNode(node *&start)
{
    node *temp = start;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
void del(node *&start, int x)
{
    if (start->data == x)
    {
        start = start->next;
        return;
    }
    node *temp = start;
    node *prev = start;
    while (temp->next != NULL)
    {
        prev = temp;
        if (temp->next->data == x)
        {
            temp = temp->next->next;
            prev->next = temp;
            break;
        }
        temp = temp->next;
    }
}

int main()
{
    node *start = NULL;
    insert(1, start);
    insert(2, start);
    insert(3, start);
    insert(4, start);
    insert(5, start);
    insert(6, start);
    // del(start, 1);
    // lastNode(start);
    disp(start);
}

//not bad