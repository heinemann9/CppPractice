#include <deque>
#include <iostream>
using namespace std;

template <typename T>
void print_deque(deque<T>& dq)
{
    cout << "[ ";
    for (const auto& d : dq)
    {
        cout << d << " ";
    }
    cout << " ]" << endl;
}

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);

    cout << "init deque status" << endl;
    print_deque(dq);

    cout << "remove first element" << endl;
    dq.pop_front();
    print_deque(dq);

    return 0;
}
