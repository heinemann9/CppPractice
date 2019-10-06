#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector<string> tmpArray;
    tmpArray.push_back("1");
    tmpArray.push_back("2");
    tmpArray.push_back("3");
    tmpArray.push_back("4");
    tmpArray.push_back("5");
    tmpArray.push_back("6");

    for (vector<string>::iterator it = tmpArray.begin(); it != tmpArray.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}
