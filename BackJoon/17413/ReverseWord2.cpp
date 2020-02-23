#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sentence;
    stack<char> xml_stack;
    stack<char> string_stack;

    getline(cin, sentence);

    for (int i = 0; i < sentence.size(); ++i)
    {
        if (sentence[i] == '<')
        {
            while (string_stack.empty() == false)
            {
                cout << string_stack.top();
                string_stack.pop();
            }
            cout << sentence[i];
            xml_stack.push(sentence[i]);
        }
        else if (sentence[i] == '>')
        {
            cout << sentence[i];
            xml_stack.pop();
        }
        else if (xml_stack.empty() == false)
        {
            cout << sentence[i];
        }
        else if (xml_stack.empty() == true)
        {
            if (sentence[i] == ' ')
            {
                while (string_stack.empty() != true)
                {
                    cout << string_stack.top();
                    string_stack.pop();
                }
                cout << " ";
            }
            else
            {
                string_stack.push(sentence[i]);
            }
        }
    }

    while (string_stack.empty() == false)
    {
        cout << string_stack.top();
        string_stack.pop();
    }
    cout << "\n";

    return 0;
}
