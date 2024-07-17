// Selection sort Alogorithm

#include <iostream>
using namespace std;

void sel_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int idx = i; // holds the index for the first element after every iteration

        for (int j = i + 1; j < n; j++)
        {
            if (arr[idx] > arr[j])
                idx = j;
        }
        swap(arr[idx],arr[i]);
    }
}

int main()
{
    int arr[10] = {5, 8, 7, 9, 10, 2, 11, 16, 13, 33};
    sel_sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
       cout << arr[i] <<"  ";
    }
    
    return 0;
}