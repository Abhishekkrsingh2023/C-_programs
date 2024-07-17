
// Descending order using Bubble Sort

#include <iostream>
using namespace std;

void Bub_sort(int arr[], int n)
{
    bool swapped; // checks for swapping (true if swapped , false if not)

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false; // assuming no swapping
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j - 1] < arr[j]) // swapped condition
            {
                swap(arr[j - 1], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false) // no swapping condition
            break;
    }
}

int main()
{
    int arr[10] = {33, 8, 99, 91, 10, 25, 135, 16, 13, 1};
    Bub_sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}