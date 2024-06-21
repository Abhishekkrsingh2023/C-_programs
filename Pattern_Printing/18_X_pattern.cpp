/*
    objective: To print the X pattern

    eg- n=5
*       *
  *   *
    *
  *   *
*       *

*/
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows(odd) :";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=row; j++)
        {
            // pattern
            if (i == j || (i + j) == row + 1) // main algorithm
                cout<<"* ";
            // spaces
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}