/*

OBJECTIVE : Program to print a Pyramid pattern with parameter 'n or row number'.
eg- n=5 (upto the user)

        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *

*/

#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the number of row : ";
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
       // loop for spaces
       for (int j = row-i; j > 0; j--)
       {
            cout<<"  ";
       }
       // loop for the pattern
       for (int k = 1; k < 2*i; k++)
       {
            cout<<"* ";
       }
       cout<<endl;
    }
    
    return 0;
}