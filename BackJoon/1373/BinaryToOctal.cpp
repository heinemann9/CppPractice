#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char binary[1000000 + 3] = { '0', '0', }; // 2개가 모지라므로 ..
    cin >> (binary + 2);

    int length = strlen(binary);

    for (int i = length % 3; i < length; i = i + 3)
    {
        cout << (binary[i] - '0') * 4 + (binary[i+1] - '0') * 2 + (binary[i+2] - '0');
    }

    return 0;
}
