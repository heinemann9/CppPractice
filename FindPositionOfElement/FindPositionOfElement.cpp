#include <iostream>
using namespace std;

int binarySearch(int* arr, int length, int value)
{
    if (arr == NULL || length < 0)
    {
        cout<<arr<<length<<endl;
        return -1;
    }

    int left = 0;
    int right = length - 1;
    int mid;

    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else if (arr[mid] > value)
        {
            right = mid - 1;
        }

    }

    return -1;
}

int FindPositionOfElementInSortedArray(int* arr, int length, int key)
{
    return binarySearch(arr, length, key);
}

int main(void)
{
    int arr[] = { 3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170 };
    int length = sizeof(arr) / sizeof(arr[0]);
    int ans = FindPositionOfElementInSortedArray(arr, length, 10);
    if (ans == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index"<<ans<<endl;
    }

    return 0;
}
