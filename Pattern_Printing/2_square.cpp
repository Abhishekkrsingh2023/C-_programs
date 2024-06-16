/*
OBJECTIVE : Program to print a square pattern of length 'n'.
eg- n=6

* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the side of square : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}