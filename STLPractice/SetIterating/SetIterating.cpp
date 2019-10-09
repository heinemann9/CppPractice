#include <iostream>
#include <set>
using namespace std;

template <typename T>
void print_set(set<T>& s)
{
    cout << "[ ";
    for (typename set<T>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "] " << endl;
}

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(40);
    s.insert(30);

    cout << "순서대로 정렬되서 나온다" << endl;
    print_set(s);

    cout << "20이 s의 원소인가요? :: ";
    auto it = s.find(20);
    if (it != s.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No " << endl;       
    }
    
    cout << "25이 s의 원소인가요? :: ";
    it = s.find(25);
    if (it != s.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No " << endl;       
    }

    return 0;
}