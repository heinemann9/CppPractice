#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> CountDistictElement(vector<int> arr)
{
    unordered_set<int> distictset;
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        if (distictset.find(*it) == distictset.end())
        {
            distictset.insert(*it);
        }
    }
    
    return distictset;
}

int main(void)
{
    vector<int> arr{10, 20, 20, 10, 30, 10};
    unordered_set<int> distictset = CountDistictElement(arr);

    cout<<"There are "<<distictset.size()<<" distict Elements ";
    unordered_set<int>::iterator it;
    for (it = distictset.begin(); it != distictset.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}
