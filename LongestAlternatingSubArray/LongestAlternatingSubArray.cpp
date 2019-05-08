#include <iostream>
#include <vector>
using namespace std;

int LongestAlternatingSubArray(vector<int> arr)
{
    int longest = 1;
    int count = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] * arr[i - 1] < 0)
        {
            count++;
            longest = max<int>(longest, count);
        }
        else
        {
            count = 1;
        }
    }

    return longest;
}

int main(void)
{
    vector<int> arr1{-5,-1,-1,2,-2,-3};
    vector<int> arr2{1,-5,1,-5};

    int longest = LongestAlternatingSubArray(arr1);
    cout<<"Output :"<<longest<<endl;

    longest = LongestAlternatingSubArray(arr2);
    cout<<"Output :"<<longest<<endl;
    
    return 0;
}
