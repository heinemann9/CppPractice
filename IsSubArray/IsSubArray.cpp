#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool IsSubArray(vector<int> arrB, vector<int> arrS)
{
    vector<int>::iterator it_S;
    vector<int>::iterator it_B;
    for (it_S = arrS.begin(); it_S != arrS.end(); it_S++)
    {
        bool IsSubArray = false;
        for (it_B = arrB.begin(); it_B != arrB.end(); it_B++)
        {
            if (*it_S == *it_B)
            {
                IsSubArray = true;
                break;
            }
        }

        if (IsSubArray == false)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    vector<int> arr1{2,3,0,5,1,1,2};
    vector<int> arr2{3,0,5,1};
    vector<int> arr3{1,2,3,4,5};
    vector<int> arr4{2,5,6};

    if (IsSubArray(arr1, arr2))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    if (IsSubArray(arr3, arr4))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
