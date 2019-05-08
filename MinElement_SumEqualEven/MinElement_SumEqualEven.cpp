#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int MinElementOfSumEqualEven(vector<int> arr)
{
    int countOdd = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            countOdd++;
        }
    }

    return min<int>(countOdd, arr.size() - countOdd);
}

int main(void)
{
    vector<int> arrS{1,2,3};
    vector<int> arrB{1,3,5,4,2};

    int min = 0;

    min = MinElementOfSumEqualEven(arrS);
    cout<<"Output :"<<min<<endl;

    min = MinElementOfSumEqualEven(arrB);
    cout<<"Output :"<<min<<endl;

    return 0;
}
