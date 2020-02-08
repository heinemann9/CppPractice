#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sentenceCount;
    vector<int> v;
    stack<int> s;
    vector<char> operator_v;

    cin >> sentenceCount;
    cin.ignore();

    while (sentenceCount--)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    vector<int>::iterator it;
    it = v.begin();

    for (int i = 1; i <= v.size(); ++i)
    {
        s.push(i);
        operator_v.push_back('+');
        while (s.empty() == false)
        {
            if (*it != s.top())
            {
                break;
            }
            else
            {
                s.pop();
                operator_v.push_back('-');
                ++it;
            }
        }
    }

    if (s.empty() == true)
    {
        for (int i = 0; i < operator_v.size(); ++i)
        {
            cout << operator_v[i] << "\n";
        }
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}
