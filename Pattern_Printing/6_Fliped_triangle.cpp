/*

OBJECTI VE : Program to print a triangular pattern with parameter 'n or row number'.
eg- n=5(upto the user)

* * * * *
* * * * 
* * *
* *
*

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
        // pattern loop
        for (int j = row-i; j>=0; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
