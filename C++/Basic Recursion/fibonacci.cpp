#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617
    Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
*/

vector<int> fibonacciNumbers(vector<int> &fibonacciNumsList, int n, int i)
{
    if (i >= n)
        return fibonacciNumsList;
    fibonacciNumsList.push_back(fibonacciNumsList[i - 1] + fibonacciNumsList[i - 2]);

    return fibonacciNumbers(fibonacciNumsList, n, i + 1);
}

int main()
{
    int n;
    vector<int> fibonacciNumsList;
    cout << "Enter the number: " << endl;
    cin >> n;
    fibonacciNumsList.push_back(0);
    if (n > 1)
    {
        fibonacciNumsList.push_back(1);
        fibonacciNumbers(fibonacciNumsList, n, 2);
    }
    cout << "Fibonacci numbers: ";
    for (auto i : fibonacciNumsList)
    {
        cout << i << " ";
    }

    return 0;
}