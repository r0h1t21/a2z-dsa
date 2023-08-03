#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://leetcode.com/problems/reverse-integer/
*/

int method_1(int x)
{
    /*
        Time Complexity = O(log n)
        Space Complexity = O(1)
    */
    int reverse = 0;
    while (x != 0)
    {
        int digit = x % 10;
        /*
            Checking for overflow
                i) If "reversed" is already "greater than INT32_MAX / 10" or "lesser than INT32_MIN / 10",
                multiplying it by 10 and adding a digit would result in overflow.
                ii) For positive numbers, if "reversed" is "equal to INT32_MAX / 10", the last digit should
                not exceed 7. Similarly, for negative numbers, if "reversed" is "equal to INT32_MIN / 10",
                the last digit should not be less than -8.
        */
        if (reverse > INT32_MAX / 10 || (reverse == INT32_MAX / 10 && digit > 7))
            return 0;
        if (reverse < INT32_MIN / 10 || (reverse == INT32_MIN / 10 && digit < -8))
            return 0;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    return reverse;
}

int method_2(int x)
{
    /*
        Time Complexity = O(log n)
        Space Complexity = O(log n)
    */
    string n;
    if (x < 0)
    {
        n = to_string(0L - static_cast<long>(x)); // Casting integer to long to handle overflow in case x is -2147483648
    }
    else
    {
        n = to_string(x);
    }
    int size = n.size();
    for (int i = 0; i < size / 2; i++)
    {
        swap(n[i], n[size - i - 1]);
    }
    long reverse = stol(n);
    if (reverse <= INT32_MAX && reverse >= INT32_MIN)
    {
        if (x < 0)
            return 0 - reverse;
        else
            return reverse;
    }
    else
        return 0;
}

int main()
{
    int n;
    int reverse;
    cout << "Enter the number:" << endl;
    cin >> n;
    reverse = method_1(n);
    cout << "Method 1 Result: " << reverse << endl;
    reverse = method_2(n);
    cout << "Method 2 Result: " << reverse << endl;

    return 0;
}