#include <bits/stdc++.h>

using namespace std;

void method_1(int n)
{
    /*
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

void method_2(int n)
{
    /*
        The quotient of a division by one of the divisors is actually another divisor. And the square root of a number
        acts like the splitting part of all the divisors of a number.
        Time Complexity = O(√n)
        Space Complexity = O(1)
    */
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Method 1 Result: ";
    method_1(n);
    cout << endl;
    cout << "Method 2 Result: ";
    method_2(n);

    return 0;
}