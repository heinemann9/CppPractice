#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned int N;
    deque<int> dq;
    string cmd;

    cin >> N;
    cin.ignore();

    for (int i = N; i > 0; --i)
    {
        getline(cin, cmd);
        if (cmd.find(' ') != -1)
        {
            if (cmd.find("push") != -1)
            {
                int value = atoi(cmd.substr(cmd.find(' ') + 1).c_str());
                if (cmd.find("front") != -1)
                {
                    dq.push_front(value);
                }
                else //if (cmd.find("back") != -1)
                {
                    dq.push_back(value);
                }
            }

        }
        else
        {
            if (cmd.find("pop") != -1)
            {
                if (dq.size() == 0)
                {
                    cout << -1 << "\n";
                    continue;
                }

                if (cmd.find("front") != -1)
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
                else //if (cmd.find("back") != -1)
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
            else if (cmd.find("size") != -1)
            {
                cout << dq.size() << "\n";
            }
            else if (cmd.find("empty") != -1)
            {
                if (dq.empty() == true)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            else if (cmd.find("front") != -1)
            {
                if (dq.size() == 0)
                {
                    cout << -1 << "\n";
                    continue;
                }

                cout << dq.front() << "\n";
            }
            else if (cmd.find("back") != -1)
            {
                if (dq.size() == 0)
                {
                    cout << -1 << "\n";
                    continue;
                }

                cout << dq.back() << "\n";
            }
        }
    }

    return 0;
}
