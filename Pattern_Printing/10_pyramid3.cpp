/*

OBJECTIVE : Program to print a Pyramid pattern with parameter 'n or row number'.
eg- n=6 (upto the user)

* * * * * * * * * * *
  * * * * * * * * * 
    * * * * * * *
      * * * * *
        * * *
          *

*/
#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the row number : ";
    cin>>row;
    // loop for rows
    for (int i = 1; i <= row; i++)
    {
       // loop for spaces
       for (int j = 1; j < i; j++)
       {
            cout<<"  ";
       }
       // loop for pattern
       for (int k = 2*(row-i)+1; k >0; k--)
       {
            cout<<"* ";
       }
       cout<<endl;
    }

    return 0;
}