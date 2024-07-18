/*
    find the first and last occurence of an element in a sorted array
eg: 1 2 3 4 5 5 5 6
key = 5 (say)
print = 4 6 (first and indices) of the occurence of 5
else if not present -1 -1

*/
#include <iostream>
using namespace std;
// for the left most digit
int First_Occ(int arr[], int n, int key)
{
    int st = 0, end = n - 1;
    int mid = st + (end - st) / 2;
    int ans = -1; // for holding the index of the left most occurence
    while (st <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1; // for left occurence
        }
        else if (key < arr[mid])
            end = mid - 1;
        else
            st = mid + 1;
        mid = st + (end - st) / 2;
    }
    return ans;
}
// for the rigth most key
int Last_Occ(int arr[], int n, int key)
{
    int st = 0, end = n - 1;
    int mid = st + (end - st) / 2;
    int ans = -1; // for holding the index of the right most occurence
    while (st <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            st = mid + 1; // for left occurence
        }
        else if (key < arr[mid])
            end = mid - 1;
        else
            st = mid + 1;
        mid = st + (end - st) / 2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,3,3,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    cout << First_Occ(arr,n,key) << "  " << Last_Occ(arr,n,key);
    return 0;
}