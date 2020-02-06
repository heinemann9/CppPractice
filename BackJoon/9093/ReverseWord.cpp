#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sentenceCount;
    string sentence;
    string token;
    stack<char> s;

    cin >> sentenceCount;
    cin.ignore();

    while (sentenceCount--)
    {
        sentence.clear();
        getline(cin, sentence);

        stringstream ss(sentence);

        while (getline(ss, token, ' '))
        {
            for (int j = 0; j < token.length(); j++)
            {
                s.push(token[j]);
            }

            while (s.empty() != true)
            {
                cout << s.top();
                s.pop();
            }

            cout << " ";
        }

        cout << "\n";
    }

    return 0;
}
