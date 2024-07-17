// Ascending order using Bubble sort

#include <iostream>
using namespace std;

void Bub_sort(int arr[], int n)
{
    bool swapped; // checks for swapping (true if swapped , false if not)
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

int main()
{
    int arr[10] = {5, 8, 7, 9, 10, 2, 11, 16, 13, 33};
    Bub_sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] <<"  ";
    }
    
    return 0;
}