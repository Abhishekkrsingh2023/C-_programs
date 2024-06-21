/*
    JUST FOR FUN :)

      *
      *
      *
      *
      *
     * *
     * *
     * *
     * *
     * *
    * * *
    * * *
    * * *
    * * *
    * * *
   * * * *
   * * * *
   * * * *
   * * * *
   * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * * 
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
    int length;
    cout << "Enter the height of Tower in integer : ";
    cin >> length;
    int space = length / 6, star = 1;
    for (int i = 1; i <= length; i++)
    {
        if (i % 6 == 0 && i != length)
        {
            star++;
            space--;
        }
        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // pattern
        for (int k = 1; k <= star; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}