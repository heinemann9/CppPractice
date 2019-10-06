#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstring>
#include <vector>
#include <functional>
using namespace std;

function<unsigned char(unsigned char)> op
{
    [](unsigned char x)
    {
        return toupper(x);
    }
};

int main()
{
    vector<string> tmpArray;
    tmpArray.push_back("a");
    tmpArray.push_back("r");
    tmpArray.push_back("E");
    tmpArray.push_back("s");
    tmpArray.push_back("T");
    tmpArray.push_back("p");

    cout << "transform is ... " << endl;

    transform
    (
        begin(tmpArray),
        end(tmpArray),
        ostream_iterator<string>(cout, " "),
        [&op](string s)
        {
            int i = 0;
            while (s[i])
            {
                s[i] = op(s[i]);
                ++i;
            }

            return s;
        }
    );

    cout << endl;

    return 0;
}
