/*
    OBJECTIVE : Sum of n natural number using recursion
*/

#include <iostream>
using namespace std;
// recursive sum function
int rec_sum(int);

int main()
{
    int num;
    cout << "Enter the number of terms : ";
    cin >> num;
    int sum = rec_sum(num); // function call and storing the returned value
    cout << "The sum of the terms is : " << sum;
    return 0;
}

// function definition
int rec_sum(int n)
{
    if (n <= 0) // base case 
        return 0;
    if (n == 1) // base case
        return 1;
    else
        return n + rec_sum(n - 1); // recursive call
}