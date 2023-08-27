#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617
    Recursive approach
    Time Complexity = O(2 ^ n), since for each node in recursion tree there are at max 2 child nodes, and for a given n, the recursion tree depth would be n
    Space Complexity = O(n), since depth of recursion tree is n, for a given n
*/

int fibonacci_num(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_num(n - 1) + fibonacci_num(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "The Fibonacci number is: " << fibonacci_num(n) << endl;
}