#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cmdCount;
    string cmd;
    stack<int> s;

    cin >> cmdCount;
    cin.ignore();

    while (cmdCount--)
    {
        cmd.clear();
        getline(cin, cmd);

        if (cmd.find(' ') != -1)
        {
            if (cmd.find("push") != -1)
            {
                int value = atoi(cmd.substr(cmd.find(' ') + 1).c_str());
                if (value < 1 && value > 100000)
                {
                    return -1;
                }

                s.push(value);
            }
        }
        else
        {
            if (cmd.find("top") != -1)
            {
                if (s.size() == 0)
                {
                    cout << -1 << "\n";
                    continue;
                }

                cout << s.top() << "\n";
            }
            else if (cmd.find("size") != -1)
            {
                cout << s.size() << "\n";
            }
            else if (cmd.find("empty") != -1)
            {
                if (s.empty() == true)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            else if (cmd.find("pop") != -1)
            {
                if (s.size() == 0)
                {
                    cout << -1 << "\n";
                    continue;
                }

                cout << s.top() << "\n";
                s.pop();
            }
        }
    }

    return 0;
}
