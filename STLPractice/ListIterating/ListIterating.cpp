#include <iostream>
#include <list>
using namespace std;

template <typename T>
void print_list(list<T>& lst)
{
    cout << "[ ";
    for (const auto& l : lst)
    {
        cout << l << " ";
    }
    cout << "] " << endl;
}

int main()
{
    list<int> lst;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);

    cout << "the status of list at first " << endl;
    print_list(lst);

    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        if (*it == 20)
        {
            lst.insert(it, 50);
        }
    }

    cout << "add 50 previous 20" << endl;
    print_list(lst);

    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        if (*it == 30)
        {
            lst.erase(it);
            break;
        }
    }

    cout << "remove 30" << endl;
    print_list(lst);

    return 0;
}
