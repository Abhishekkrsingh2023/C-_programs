/*

OBJECTI VE : Program to print a triangular pattern with parameter 'n or row number'.
eg- n=5

format:1            or          Format : 2

*                               *
**                              * *
***                             * * *
****                            * * * *
*****                           * * * * *

*/
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row : ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        // loop for pattern
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    // or
    for (int i = 1; i <= row; i++)
    {
        // loop for pattern
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}