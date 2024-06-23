/*
    OBJECTIVE : factorial of a number
*/

#include <iostream>
using namespace std;
// recursive factorial
int fact(int);

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int factorial = fact(num); // function call and storing the returned value
    cout << num << "! is : " << factorial;
    return 0;
}

// function definition
int fact(int n)
{
    if (n < 0) // base case
        return 0;
    if (n == 0) // base case 
        return 1;
    else
        return n * fact(n - 1); // recursive call
}