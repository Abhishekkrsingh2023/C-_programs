/*
    Program to convert a Binary number into a Decimal number
*/

#include <iostream>
using namespace std;

void Bin_deci(long long num)
{
    int deci = 0, digit = 0, power = 1;
    while (num != 0)
    {
        digit = num % 10;
        deci = deci + digit * power;
        power *= 2;
        num /= 10;
    }
    cout << deci;
}
int main()
{
    long long num;
    cout << "Enter a Binary Number : ";
    cin >> num;
    Bin_deci(num);
    return 0;
}