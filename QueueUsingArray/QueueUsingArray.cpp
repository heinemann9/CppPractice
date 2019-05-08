#include <iostream>
#include <vector>
using namespace std;

struct Queue
{
    vector<int> arr;
    int front;
    int rear;
    int capacity;

    Queue (int c)
    {
        front = rear = 0;
        capacity = c;
    }

    void Enqueue(int data)
    {
        if (capacity == rear)
        {
            cout<<"Queue is full."<<endl;
            return;
        }

        arr.push_back(data);
        rear++;
    }

    int Dequeue()
    {
        if (rear == 0)
        {
            cout<<"Queue is empty."<<endl;
        }

        int data = arr[rear];

        for (int i = 0; i < rear - 1; i++)
        {
            arr[i] = arr[i+1];
        }

        rear--;

        return data;
    }

    void Front()
    {
        if (front == rear)
        {
            cout<<"Queue is empty."<<endl;
            return;
        }

        cout<<"front:"<<arr[front]<<endl;
    }

    void Display()
    {
        if (front == rear)
        {
            cout<<"Queue is empty."<<endl;
            return;
        }

        for(int i = front; i < rear; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main(void)
{
    Queue q(4);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);

    q.Display();

    q.Enqueue(60);

    q.Display();

    q.Dequeue();
    q.Dequeue();

    cout<<"after two node deletion"<<endl;

    q.Display();

    q.Front();
    
    return 0;
}
