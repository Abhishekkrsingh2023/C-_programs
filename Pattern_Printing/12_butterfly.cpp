/*

OBJECTIVE : Program to print a butterfly pattern with parameter 'n or row number'.
eg- n=7 (upto the user)

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows(odd) : ";
    cin >> row;
    int r1, r2;
    r1 = row / 2 + 1;
    r2 = row / 2;
    // loop for pattern 1
    for (int i = 1; i <= r1; i++)
    {
        // pattern
        for (int j = 1; j <= i; j++)
            cout << "* ";
        // spaces
        for (int k = 2*(r1 - i); k > 0; k--)
        {
            cout<<"  ";
        }
        // pattern
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    // loop for pattern 2
    for (int i = 1; i <= r2; i++)
    {
        // pattern
        for (int j = r2; j>=i; j--)
        {
            cout<<"* ";
        }
        // spaces
        for (int k = 1; k <=2*i; k++)
        {
            cout<<"  ";
        }
        for (int j = r2; j>=i; j--)
        {
            cout<<"* ";
        }
        cout << endl;
    }

    return 0;
}
