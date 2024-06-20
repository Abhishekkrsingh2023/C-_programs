/*

OBJECTIVE : Program to print a parallelogram pattern of dimension LxB.
eg- n=7
* * * * * * *
* * *   * * *
* *       * *
*           *
* *       * *
* * *   * * *
* * * * * * *

*/
#include <iostream>
using namespace std;

int main()
{
    int row, r1;
    cout << "Enter the number of row : ";
    cin >> row;
    r1 = row / 2;
    // pattern 1(upper half)
    if (row % 2 != 0)
    {
        // pattern 1(upper-half)
        for (int i = 1; i <= r1 + 1; i++)
        {
            if (i == 1)
            {
                for (int j = 1; j <= row; j++)
                    cout << "* ";
                cout << endl;
            }
            else
            {
                // for pattern
                for (int j = r1 + 1 - i; j >= 0; j--)
                    cout << "* ";
                // for spaces
                for (int k = 2; k <= 2 * (i - 1); k++)
                    cout << "  ";
                // pattern
                for (int j = r1 + 1 - i; j >= 0; j--)
                    cout << "* ";

                cout << endl;
            }
        }
        // pattern 2(lower half)
        for (int i = 1; i <= r1; i++)
        {
            if (i == r1)
            {
                for (int j = 1; j <= row; j++)
                    cout << "* ";
                cout << endl;
            }
            else
            {
                // pattern
                for (int k = i; k >= 0; k--)
                    cout << "* ";
                // spaces
                for (int j = 1; j <= 2 * (r1 - i) - 1; j++)
                    cout << "  ";
                // pattern
                for (int k = i; k >= 0; k--)
                    cout << "* ";
            }
            cout << endl;
        }
    }
    else
        cout<<"Enter odd row number";
    return 0;
}