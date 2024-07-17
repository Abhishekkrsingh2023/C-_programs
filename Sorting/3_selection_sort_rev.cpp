/*
    for arranging in acsecnding order but by sending
    the largest to the last position and to the second last
    and so on ..
*/

#include<iostream>
using namespace std;

void sel_sortRev(int arr[], int n)
{
    for (int i = n-1; i > 0 ; i--)
    {
        int idx = i;
       for (int j = 0; j <=i; j++)
       {
            if(arr[j] > arr[idx])
                idx = j;
       }
       swap(arr[i],arr[idx]);
    }
    
}

int main()
{
    int arr[10] = {33, 8, 16, 9, 10, 2, 11, 43, 13, 1};
    sel_sortRev(arr,10);
    for (int i = 0; i < 10; i++)
    {
       cout << arr[i] <<"  ";
    }
    
    return 0;
}