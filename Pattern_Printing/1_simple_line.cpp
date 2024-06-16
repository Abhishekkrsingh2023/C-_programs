/*
    program to print n number of stars in a row
    eg. n=5
    output: *****
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // the loop to print the pattern
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    return 0;
}