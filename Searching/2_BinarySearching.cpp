/*
    Binary Search in array (simple logic divide in half and search if the key is > or < mid)

    For this case we are assuming an increasing array
*/

#include <iostream>
using namespace std;

int B_search(int arr[], int n, int key)
{
    int st = 0, end = n - 1; // asigning the start and end indices
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            st = mid + 1;
        mid = st + (end - st) / 2;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements (Increaing order) : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to find : ";
    cin >> key;

    cout << "The Index of the the Key entered is : " << B_search(arr, n, key);

    return 0;
}