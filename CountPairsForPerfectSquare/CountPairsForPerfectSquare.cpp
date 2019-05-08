#include <iostream>
#include <vector>
#include <utility>
#include <unordered_set>
#include <math.h>
using namespace std;

int CountPairsForPerfectSquare(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j || i < j)
            {
                continue;
            }
            else
            {
                double temp = arr[i] + arr[j];
                double result = sqrt(temp);
                if ((result - (int)result) == 0)
                {
                    count++;
                }
            }
        }
    }

    return count;
}

int main(void)
{
    vector<int> arr{2,3,6,9,10,20};
    int count = CountPairsForPerfectSquare(arr);
    
    cout<<"Output: "<<count<<endl;

    return 0;
}
