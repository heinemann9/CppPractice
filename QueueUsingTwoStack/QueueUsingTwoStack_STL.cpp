#include <iostream>
#include <stack>
using namespace std;

struct Queue
{
    stack<int> stack1;
    stack<int> stack2;

    void enqueue(int data)
    {
        stack1.push(data);
    }

    int dequeue()
    {
        // empty
        if (stack1.empty() && stack2.empty())
        {
            cout<<"Queue Empty."<<endl;
            exit(0);
        }
     
        // stack2 empty
        while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }

        int result = stack2.top();
        stack2.pop();

        return result;
    }
};

int main(void)
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}
