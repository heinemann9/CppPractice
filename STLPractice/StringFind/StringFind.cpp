#include <iostream>
#include <string>
using namespace std;

void solution(string word)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0 ; i < alphabet.size(); ++i)
    {
        if (word.find(alphabet[i]) == string::npos)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << word.find(alphabet[i]) <<" ";
        }
        
    }
}

int main(void)
{
    string word;
    cin >> word;
    solution(word);

    return 0;
}