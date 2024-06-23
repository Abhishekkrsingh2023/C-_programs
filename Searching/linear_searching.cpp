/*
    Topic : Linear searching in an array
*/
#include <iostream>
using namespace std;

int L_search(int[], int); // function for linear search

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements (" << n << ") elements : " << endl;
    // input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index=L_search(arr,n);
    cout<<"The element is found at index : "<<index;
    return 0;
}
// function definition
int L_search(int arr[], int n)
{
    int key;
    cout << "Enter the key/Number to search : ";
    cin >> key; // element to find

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    
    return -1;
}