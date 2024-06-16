/*

OBJECTIVE : Program to print a parallelogram pattern of dimension LxB.
eg- n=5

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
    int row, r1, r2;
    cout << "Enter the number of row : ";
    cin >> row;
    r1 = row / 2 + 1;
    r2 = row / 2;
    // pattern 1
    for (int i = 1; i <= r1; i++)
    {
        // spaces
        for (int j = r1 - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // pattern 2
    for (int i = 1; i <= r2; i++)
    {
        // spaces
        for (int k = 1; k <=i; k++)
        {
            cout<<"  ";
        }
        // pattern
        for (int j =1; j <= 2*(r2-i)+1; j++)
        {
            cout << "* ";
        }
        
        cout<<endl;
    }

    return 0;
}