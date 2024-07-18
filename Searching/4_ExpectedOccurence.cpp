// Binary search in a increasing array
/*
    Binary Search in array (simple logic divide in half and search if the key is > or < mid)

    For this case we are assuming an increasing array
*/

#include <iostream>
using namespace std;

int Exp_Occurence(int arr[], int n, int key)
{
    int st = 0, end = n - 1; // asigning the start and end indices
    int mid = st + (end - st) / 2;
    int idx = n; // if element is not greater than any element
    while (st <= end)
    {
        if (arr[mid] == key)
        {
            idx = mid;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            idx = mid; // to store expected index if element was present
        }
        else
            st = mid + 1;
        mid = st + (end - st) / 2;
    }
    return idx;
}

int main()
{
    int arr[]={1,2,3,4,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5; // 5 is missing but we need the expected index

    cout << Exp_Occurence(arr, n, key);

    return 0;
}