// Insertion sort for decreasing order

#include <iostream>
using namespace std;

void Insert_sort(int arr[], int n)
{
    // Algorithm for Insertion sort
    for (int i = 1; i < n; i++)
        for (int j = i; j >= 1; j--)
            if (arr[j] > arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    Insert_sort(arr,5); // function call

    for (int i = 0; i < 5; i++)
        cout << arr[i] << "  ";
    
    return 0;
}