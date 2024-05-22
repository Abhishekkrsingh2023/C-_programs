#include <iostream>
using namespace std;

int main()
{
    int arr[5]; // array declaration
    cout << "Enter 5 array elements :"<<endl;
    // taking input
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // printing the output
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
}