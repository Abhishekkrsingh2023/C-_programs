#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of array elements : ";
    cin >> n; // taking number of elements from user
    int arr[n]; // array size declaration
    cout << "Enter " << n << " elements : " << endl;
    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\t";
    }
    cout << endl;

    return 0;
}