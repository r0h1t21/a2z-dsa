#include <bits/stdc++.h>

using namespace std;

bool method_1(int n)
{
    /*
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool method_2(int n)
{
    /*
        The quotient of a division by one of the divisors is actually another divisor. And the square root of a number
        acts like the splitting part of all the divisors of a number. So if there are no divisors until √n, then n
        will be a prime number.
        Time Complexity = O(√n)
        Space Complexity = O(1)
    */
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    bool is_prime;
    cout << "Enter the number:" << endl;
    cin >> n;
    is_prime = method_1(n);
    if (is_prime)
        cout << "(Method 1) Is " << n << " a prime number?: True" << endl;
    else
        cout << "(Method 1) Is " << n << " a prime number?: False" << endl;
    is_prime = method_2(n);
    if (is_prime)
        cout << "(Method 2) Is " << n << " a prime number?: True" << endl;
    else
        cout << "(Method 2) Is " << n << " a prime number?: False" << endl;

    return 0;
}