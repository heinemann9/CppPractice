#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

template <typename Out>
void split(const string &s, char delim, Out result)
{
    istringstream iss(s);
    string item;
    while (getline(iss, item, delim))
    {
        *result++ = item;
    }
}

vector<string> split(const string &s, char delim)
{
    vector<string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}

string solution(vector<string> vectors)
{
    string w, result = "";
    vector<string> vs;

    for (int i = 0; i < vectors.size(); ++i)
    {
        vs = split(vectors[i], ' ');

        int count = atoi(vs[0].c_str());

        for (int i = 0; i < vs[1].length(); ++i)
        {
            for (int j = 0; j < count; ++j)
            {
                result += vs[1][i];
            }
        }
        result += "\n";
    }

    return result;
}

int main()
{
    int testcase;
    cin >> testcase;
    cin.ignore(256, '\n');

    string S;
    vector<string> vs;

    for (int i = 0; i < testcase; ++i)
    {
        getline(cin, S);
        vs.push_back(S);
    }

    cout << solution(vs) << "\n";
}