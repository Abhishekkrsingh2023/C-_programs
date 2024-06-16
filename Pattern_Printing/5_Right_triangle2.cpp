/*

OBJECTI VE : Program to print a triangular pattern with parameter 'n or row number'.
eg- n=5(upto the user)

        *
      * *
    * * *
  * * * *
* * * * * 

*/

#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        // loop for spaces
        for (int j = row-i; j > 0; j--)
        {
            cout<<"  ";
        }
        // pattern loop
        for (int k = 1; k <= i; k++)
        {
            cout<<"* ";
        }
        cout<<endl; // jumps to next row
    }
    
    return 0;
}