#include <bits/stdc++.h>

using namespace std;

long long method_1(long long n)
{
    /*
        Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
    */
    if (n == 1)
        return 1;

    return n * method_1(n - 1);
}

long long method_2(long long n)
{
    /*
        Iterative approach
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    long long n;
    long long factorial;
    cout << "Enter the number: " << endl;
    cin >> n;
    factorial = method_1(n);
    cout << "Method 1 Result: " << factorial << endl;
    factorial = method_2(n);
    cout << "Method 2 Result: " << factorial << endl;

    return 0;
}