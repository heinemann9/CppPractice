#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int CountPairsXY(vector<int> arr)
{
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i] < arr[j])
            {
                count++;
            }
        }
    }

    return count;
}

int main(void)
{
    vector<int> arr1{2,4,3,1};
    vector<int> arr2{5,10};

    int count = CountPairsXY(arr1);
    cout<<"Output:"<<count<<endl;

    count = CountPairsXY(arr2);
    cout<<"Output:"<<count<<endl;

    return 0;
}
