#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://leetcode.com/problems/palindrome-number/
*/

bool method_1(int n)
{
    /*
        Compare the input and reverse of it
        Time Complexity = O(log n)
        Space Complexity = O(1)
    */
    int num = n;
    if (num > 0)
    {
        int reverse = 0;
        while (num != 0)
        {
            reverse = reverse * 10 + (num % 10);
            num /= 10;
        }
        if (reverse == n)
            return true;
        else
            return false;
    }
    else
        return false;
}

bool method_2(int n)
{
    /*
        Convert the number to string and compare i th character with (length(n) - i - 1) th character
        Time Complexity = O(log n)
        Space Complexity = O(log n)
    */
    if (n > 0)
    {
        string num = to_string(n);
        int size = num.size();
        for (int i = 0; i < size / 2; i++)
        {
            if (num[i] != num[size - i - 1])
                return false;
        }
        return true;
    }
    else
        return false;
}

int main()
{
    int n;
    bool is_palindrome;
    cout << "Enter the number:" << endl;
    cin >> n;
    is_palindrome = method_1(n);
    if (is_palindrome)
        cout << "(Method 1) Is " << n << " a palindrome?: True" << endl;
    else
        cout << "(Method 1) Is " << n << " a palindrome?: False" << endl;
    is_palindrome = method_2(n);
    if (is_palindrome)
        cout << "(Method 2) Is " << n << " a palindrome?: True" << endl;
    else
        cout << "(Method 2) Is " << n << " a palindrome?: False" << endl;

    return 0;
}