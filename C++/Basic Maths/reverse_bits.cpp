#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
    Time Complexity = O(1)
    Space Complexity = O(1)
*/
void decimal_to_binary(long long X, int *arr)
{
    int index = 31;
    while (X > 0)
    {
        if (index >= 0)
        {
            arr[index] = X % 2;
            X = X / 2;
        }
        else
            break;
        index--;
    }

    while (index >= 0)
    {
        arr[index] = 0;
        index--;
    }
}

int main()
{
    long long X;
    cout << "Enter a number: " << endl;
    cin >> X;

    int arr[32];
    long long output = 0;
    if (X <= INT32_MAX && X >= 0)
    {
        decimal_to_binary(X, arr);

        long long temp = 1;
        for (auto i : arr)
        {
            output = output + i * temp;
            temp *= 2;
        }
    }

    cout << endl
         << "Reversed number is: " << output;

    return 0;
}