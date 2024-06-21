/*

OBJECTIVE : Program to print a double sided pyramid..
eg - n=9

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include <iostream>
using namespace std;

int main()
{
    int row, r1, r2;
    cout << "Enter the number of rows(odd) : ";
    cin >> row;
    r1 = row / 2 + 1;
    r2 = row / 2;
    // pattern 1(upper half)
    for (int i = 1; i <= r1; i++)
    {
        // spaces
        for (int j = 1; j < i; j++)
            cout<<"  ";       
        // pattern
        for (int k = 1; k <=2*(r1-i)+1; k++)
            cout<<"* ";
        cout<<endl;
    }
    // pattern 2(lower half)
    for (int i = 2; i <= r1; i++)
    {
        // spaces
        for (int j = 1; j <= r1-i; j++)
            cout<<"  ";
        for (int k =1; k <= 2*i-1; k++)
            cout<<"* ";
        cout<<endl;
    }
     
    return 0;
}