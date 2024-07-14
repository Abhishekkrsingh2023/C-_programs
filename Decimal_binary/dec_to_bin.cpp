#include <iostream>
using namespace std;

void Dec_bin(int num)
{
    long long binary = 0;
    int power = 1,digit = 0;
    while (num != 0)
    {
        digit = num%2;
        binary += digit * power ;
        num /= 2;
        power *= 10;
    }
    cout << binary ;
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    Dec_bin(num);
    return 0;
}