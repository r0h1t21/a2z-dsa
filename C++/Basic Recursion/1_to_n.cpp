#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/print-1-to-n_628290
*/

void printNums(int n)
{
    /*
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    if (n == 0)
        return;
    printNums(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    printNums(n);

    return 0;
}