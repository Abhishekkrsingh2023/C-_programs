#include <iostream>
using namespace std;

int Lin_search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1; // incase the key is missing
}


int main()
{
    int arr[]={5,9,5,4,63,12,1,11,25,89};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << Lin_search(arr,n,12);
    return 0;
}