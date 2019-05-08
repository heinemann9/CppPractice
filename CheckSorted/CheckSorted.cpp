#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<int> _DifferentIndex;

bool CheckSorted(int* arr, int length)
{
    int cpy[length];
    int count = 0;
    copy(arr, arr+length, cpy);
    sort(cpy, cpy+length);

    cout<<"sorted : ";
    for (int i = 0; i < length; i++)
    {
        cout<<cpy[i]<<" ";
        if (arr[i] != cpy[i])
        {
            _DifferentIndex.insert(i);
            count++;
        }
    }
    cout<<endl;

    if (count <= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int arr[] = { 1, 2, 4, 3, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // input
    cout<<"input : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // output
    bool output = CheckSorted(arr, size);
    if (output == true)
    {
        cout<<"Output : "<<"true"<<endl;
    }
    else
    {
        cout<<"Output : "<<"false"<<endl;
    }

    if (_DifferentIndex.size() >= 2)
    {
        cout<<"Swap : ";
        set<int>::iterator it;
        for (it = _DifferentIndex.begin(); it != _DifferentIndex.end(); it++)
        {
            cout<<arr[*it]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
