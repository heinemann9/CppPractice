#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node (int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void reverse()
    {
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main(void)
{
    LinkedList ll;
    ll.push(20);
    ll.push(10);
    ll.push(30);
    ll.push(50);

    ll.print();

    ll.reverse();
    cout<<endl;

    ll.print();

    return 0;
}
