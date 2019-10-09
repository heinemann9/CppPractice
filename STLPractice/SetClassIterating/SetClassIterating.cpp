#include <iostream>
#include <set>
#include <string>
using namespace std;

template <typename T>
void print_set(set<T>& s)
{
    for (typename set<T>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << endl;
    }
}

class Todo
{
    int priority;
    string job_desc;

    public:
    Todo(int priority, string job_desc)
    : priority(priority), job_desc(job_desc) { }

    bool operator<(const Todo& t) const
    {
        if (priority == t.priority)
        {
            return job_desc < t.job_desc;
        }
        return priority > t.priority;
    }

    friend ostream& operator<<(ostream& o, const Todo& td);
};

ostream& operator<<(ostream& o, const Todo& td)
{
    o << "[ 중요도: " << td.priority << "] " << td.job_desc;
    return o;
}

int main()
{
    set<Todo> todos;
    todos.insert(Todo(1, "BasketBall"));
    todos.insert(Todo(2, "Math"));
    todos.insert(Todo(1, "Programming"));
    todos.insert(Todo(3, "Meet Friend"));
    todos.insert(Todo(2, "Watch Movie"));

    print_set(todos);

    cout << "---------" << endl;
    cout << "if done your homework" << endl;
    todos.erase(todos.find(Todo(2, "Math")));
    print_set(todos);
}
