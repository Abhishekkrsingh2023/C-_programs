/*
    Objective : Arranging array elements in ascending order
*/

#include <iostream>
using namespace std;

void Display(int[], int);    // display function
void SimpleSort(int[], int); // simple sort
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
    cout << "Elements before sorting : ";
    Display(arr, n);
    // sorting function call
    SimpleSort(arr, n);
    cout << "\nElements after sorting : ";
    Display(arr, n);
    return 0;
}
// function definition
void SimpleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
// Display function definition
void Display(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}