/*

OBJECTIVE : Program to print a triangular pattern with parameter 'n or row number'.
eg- n=5(upto the user)

* * * * *
  * * * *
    * * *
      * *
        *
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        // loop for space printing
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        // loop for the pattern
        for (int k = row - i + 1; k > 0; k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
