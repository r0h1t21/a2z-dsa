#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://leetcode.com/problems/valid-palindrome/description/
    Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
*/

void processString(string &s, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            s[j] = s[i];
            j++;
        }
    }
    s = s.substr(0, j);
}

bool palindrome(string &s, int n, int i)
{
    if (i >= n / 2)
        return true;
    else if (s[i] != s[n - i - 1])
        return false;

    return palindrome(s, n, i + 1);
}

int main()
{
    string str;
    cout << "Enter the string: " << endl;
    getline(cin, str);
    processString(str, str.size());
    cout << "After processing/cleaning the given string: " << str << endl;
    bool result = palindrome(str, str.size(), 0);
    if (result)
        cout << "The given string is a Palindrome" << endl;
    else
        cout << "The given string is not a Palindrome" << endl;

    return 0;
}