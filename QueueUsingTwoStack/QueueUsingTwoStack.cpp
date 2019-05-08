#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct Queue
{
    Node* stack1;
    Node* stack2;
};

void push(Node** top_ref, int data);
int pop(Node** stack);
void enqueue(Queue *q, int data);
int dequeue(Queue *q);

// Queue func
void enqueue(Queue *q, int data)
{
    push(&q->stack1, data);   
}

int dequeue(Queue *q)
{
    int data;

    if (q->stack1 == NULL && q->stack2 == NULL)
    {
        cout<<"Queue is empty."<<endl;
        return -1;
    }

    if (q->stack2 == NULL)
    {
        while(q->stack1 != NULL)
        {
            data = pop(&q->stack1);
            push(&q->stack2, data);
        }
    }

    data = pop(&q->stack2);
    return data;
}

// Stack func
void push(Node** top_ref, int data)
{
    Node* new_node = new Node(data);

    if (new_node == NULL)
    {
        cout<<"Overflow."<<endl;
    }

    new_node->next = (*top_ref);

    (*top_ref) = new_node;
}

int pop(Node** top_ref)
{
    int data;
    Node* top = *top_ref;
    data = top->data;
    *top_ref = top->next;
    free(top);
    return data;
}

int main(void)
{
    Queue *q = new Queue();
    q->stack1 = NULL;
    q->stack2 = NULL;

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);

    cout<<dequeue(q)<<endl;
    cout<<dequeue(q)<<endl;
    cout<<dequeue(q)<<endl;
    return 0;
}
