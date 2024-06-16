/*

OBJECTIVE : Program to print a rectangular pattern of dimension LxB.
eg- L=6 and B=4

* * * * * *
* * * * * *
* * * * * *
* * * * * *

*/
#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "Enter the length and breadth of rectangle : ";
    cin >> row>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}