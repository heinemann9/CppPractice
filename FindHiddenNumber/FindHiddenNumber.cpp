#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindHiddenNumber(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
 
    sum /=arr.size();
    vector<int>::iterator it;
    it = find(arr.begin(), arr.end(), sum);
    if (it != arr.end())
    {
        return *it;
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    vector<int> arr{ 1, 2, 3, 4, 5 };
    int HiddenNumber = FindHiddenNumber(arr);
    cout<<"Output : "<<HiddenNumber<<endl;

    return 0;
}
