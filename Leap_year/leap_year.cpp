#include <iostream>
using namespace std;

bool is_leap(int year){
    // condition for leap year
    if(year%400==0 || (year%4==0 && year%100!=0))
        return true;
    else 
        return false;
}

int main(){
    int year;
    cout << "Enter the year : ";
    cin >> year;

    cout << is_leap(year);

    return 0;
}