/*
    Topic : Binary search in an array
*/
#include <iostream>
using namespace std;

int Binary_search(int[], int, int); // function for Binary search

int main()
{
    int n, key;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n]; // array with n elements
    cout << "Enter array elements (" << n << ") elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to find : ";
    cin >> key; // value to find
    cout << "THe index of the element is : " << Binary_search(arr, n, key);

    return 0;
}
// function definition
int Binary_search(int arr[], int n, int key)
{
    int st = 0, end = n - 1; // startind and ending indices
    int mid;
    // the main algorithm
    while (st <= end)
    {
        mid = (st / 2 + end);
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            st = mid + 1;
    }
    // inncase the element is missing
    return -1;
}