#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

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
        [](string s)
        {
            int i = 0;
            char c;
            while (s[i])
            {
                c = s[i];
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                {
                    s[i] = '*';
                }
                ++i;
            }

            return s;
        }
    );

    cout << endl;

    return 0;
}
