#include <iostream>
using namespace std;

int FindSingle(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; i++)
    {
        result = result ^ arr[i];
    }

    return result;
}

int main(void)
{
    int arr[] = {2,3,4,5,4,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<FindSingle(arr, n)<<endl;

    return 0;
}
