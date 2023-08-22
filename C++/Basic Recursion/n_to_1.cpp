#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243
*/

void printNums(int n, int m)
{
    /*
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    if (n == m)
        return;
    cout << n - m << " ";
    printNums(n, m + 1);
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    printNums(n, 0);

    return 0;
}