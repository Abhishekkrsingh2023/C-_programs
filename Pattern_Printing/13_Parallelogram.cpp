/*

OBJECTIVE : Program to print a parallelogram pattern of dimension LxB.
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
    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        // space
        for (int j = row - i; j > 0; j--)
        {
            cout<<"  ";
        }
        // pattern
        for (int k = 1; k <= row; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}