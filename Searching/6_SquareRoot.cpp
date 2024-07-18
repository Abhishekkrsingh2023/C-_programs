// Finding approaximate square root using Binary Search approach

#include <iostream>
using namespace std;

int Sqrt(int num)
{
    int st = 1, end = num - 1;
    int mid = st + (end - st) / 2;
    int ans = 0;

    while (st <= end)
    {
        if (mid * mid == num)
            return mid;
        else if (mid * mid > num)
            end = mid - 1;
        else
        {
            ans = mid;
            st = mid + 1;
        }
        mid = st + (end - st) / 2;
    }

    return ans;
}

int main()
{
    int nums = 1600;
    cout << Sqrt(nums);
    return 0;
}