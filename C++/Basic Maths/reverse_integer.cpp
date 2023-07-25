#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://leetcode.com/problems/reverse-integer/
*/

/*
    Time Complexity = O(log n)
    Space Complexity = O(1)
*/
int reverse_method_1(int x)
{
    int reversed = 0;
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
        if (reversed > INT32_MAX / 10 || (reversed == INT32_MAX / 10 && digit > 7))
            return 0;
        if (reversed < INT32_MIN / 10 || (reversed == INT32_MIN / 10 && digit < -8))
            return 0;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return reversed;
}

/*
    Time Complexity = O(log n)
    Space Complexity = O(log n)
*/
int reverse_method_2(int x)
{
    string n;
    if (x < 0)
    {
        n = to_string(0L - static_cast<long>(x)); // Casting integer to long to handle overflow in case x is -2147483648
    }
    else
    {
        n = to_string(x);
    }
    int index = n.size();
    for (int i = 0; i < index / 2; i++)
    {
        swap(n[i], n[index - i - 1]);
    }
    long out = stol(n);
    if (out <= INT32_MAX && out >= INT32_MIN)
    {
        if (x < 0)
            return 0 - out;
        else
            return out;
    }
    else
        return 0;
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int reverse_num_1 = reverse_method_1(n);
    cout << "Method 1 Result: " << reverse_num_1 << endl;
    int reverse_num_2 = reverse_method_2(n);
    cout << "Method 2 Result: " << reverse_num_2 << endl;

    return 0;
}