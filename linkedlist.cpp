#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insert(Node *head, int data)
{
    Node *temp = head;
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    cout << data << " Node inserted\n";
}

void display(Node *head)
{
    Node *start = head;
    while (start != NULL)
    {
        cout << start->data << " ";
        start = start->next;
    }
}

int main()
{
    Node *head = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        insert(head, data);
    }
    display(head);
}