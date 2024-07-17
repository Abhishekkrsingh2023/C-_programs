// Insertion sort

#include <iostream>
using namespace std;
void Insert_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
        // Algorithm
        for (int j = i; j >= 1; j--)
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    Insert_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}