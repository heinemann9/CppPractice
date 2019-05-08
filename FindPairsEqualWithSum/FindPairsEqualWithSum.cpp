#include <iostream>
#include <vector>
using namespace std;

//void FindPairsEqualWithSum(int *arr, int length, int inputNumber)
//{
//    int size = sizeof(arr);
//    cout<<size<<endl;
//    int size2 = sizeof(*arr);
//    cout<<size2<<endl;
//
//    for (int i = 0; i < length; i++)
//    {
//        for (int j = i + 1; j < length; j++)
//        {
//            if (arr[i] + arr[j] == inputNumber)
//            {
//                cout<<arr[i]<<"+"<<arr[j]<<"="<<inputNumber<<endl;
//            }
//        }
//    }
//}

void FindPairsEqualWithSum(vector<int> arr, int inputNumber)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == inputNumber)
            {
                cout<<arr[i]<<"+"<<arr[j]<<"="<<inputNumber<<endl;
            }
        }
    }
}

int main(void)
{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    FindPairsEqualWithSum(arr, n, 6);
//    FindPairsEqualWithSum(arr, n, 11);
//    FindPairsEqualWithSum(arr, n, 8);
//    FindPairsEqualWithSum(arr, n, 15);

    vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    FindPairsEqualWithSum(arr, 6);
    FindPairsEqualWithSum(arr, 11);
    FindPairsEqualWithSum(arr, 8);
    FindPairsEqualWithSum(arr, 15);

    return 0;
}
