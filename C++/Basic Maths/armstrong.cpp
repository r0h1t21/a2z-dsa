#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the Problem: https://www.codingninjas.com/studio/problems/check-armstrong_589
*/

bool checkArmstrong(int n)
{
    /*
        Time Complexity = O(log n)
        Space Complexity = O(1)
    */
    int num = n;
    long long powerSum = 0;
    string num_str = to_string(n);
    while (num != 0)
    {
        powerSum += pow(num % 10, num_str.size());
        num /= 10;
    }
    if (powerSum == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    bool is_armstrong;
    cout << "Enter the number:" << endl;
    cin >> n;
    is_armstrong = checkArmstrong(n);
    if (is_armstrong)
        cout << "Is " << n << " an armstrong number?: True" << endl;
    else
        cout << "Is " << n << " an armstrong number?: False" << endl;

    return 0;
}