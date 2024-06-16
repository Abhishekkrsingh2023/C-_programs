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
    cout << "Enter the number of rows : ";
    cin >> row;
    int r1, r2;
    r1 = row / 2 + 1;
    r2 = row / 2;
    // loop for pattern 1
    for (int i = 1; i <= r1; i++)
    {
        // loop for space printing
        for (int j = r1 - i; j > 0; j--)
        {
            cout << "  ";
        }
        // loop for pattern printing
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // loop for pattern 2
    for (int i = 1; i <= r2; i++)
    {
        // loop for space printing
        for (int j = i; j > 0; j--)
        {
            cout << "  ";
        }
        // loop for pattern printing
        for (int k = r2; k >=i; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}