/*

OBJECTIVE : Program to print a Pyramid pattern with parameter 'n or row number'.
eg- n=7 (upto the user)

*
* *
* * *
* * * *
* * *
* *
*

*/

// NOTE : Number of rows should be odd number.

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    // varibles for 1st and 2nd half
    int r1,r2 = row / 2;
    if (row % 2 != 0)
        r1 = row / 2 + 1;
    else
        r1 = row / 2;

    // loop for pattern1
    for (int j = 1; j <= r1; j++)
    {
        for (int k = 1; k <= j; k++)
            cout << "* ";
        cout << endl;
    }
    // loop for pattern 2
    for (int l = 1; l <= r2; l++)
    {
        for (int i = r2 - l + 1; i > 0; i--)
            cout << "* ";
        cout << endl;
    }
    return 0;
}