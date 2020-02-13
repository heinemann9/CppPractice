#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    string cmd;
    int sentenceCount;

    cin >> sentenceCount;
    cin.ignore();

    while (sentenceCount--)
    {
        cmd.clear();
        getline(cin, cmd);
        if (cmd.find(' ') != -1)
        {
            if (cmd.find("push") != -1)
            {
                int value = atoi(cmd.substr(cmd.find(' ') + 1).c_str());
                q.push(value);
            }
        }
        else
        {
            if (cmd.find("pop") != -1)
            {
                if (q.empty() == true)
                {
                    cout << -1 << "\n";
                    continue;
                }
                cout << q.front() << "\n";
                q.pop();
            }
            else if (cmd.find("size") != -1)
            {
                cout << q.size() << "\n";
            }
            else if (cmd.find("empty") != -1)
            {
                if (q.empty() == true)
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
                if (q.empty() == true)
                {
                    cout << -1 << "\n";
                    continue;
                }
                cout << q.front() << "\n";
            }
            else if (cmd.find("back") != -1)
            {
                if (q.empty() == true)
                {
                    cout << -1 << "\n";
                    continue;
                }
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}
