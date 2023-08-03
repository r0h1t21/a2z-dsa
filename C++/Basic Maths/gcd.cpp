#include <bits/stdc++.h>

using namespace std;

int method_1(int n1, int n2)
{
    /*
        Traverse from 1 to min(n1, n2) and check for every number
        Time Complexity = O(n), where n is min(n1, n2)
        Space Complexity = O(1)
    */
    int min;
    int gcd;
    if (n1 < n2)
        min = n1;
    else
        min = n1;
    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    return gcd;
}

int method_2(int n1, int n2)
{
    /*
        Euclidean Algorithm (https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm)
        Time Complexity = O(log min(n1, n2)), because the number of recursive calls is bounded by the number of bits required to
        represent the smaller of the two numbers. This is because, in each recursive call, value of 'n2' is reduced by a factor
        of atleast 2.
        Space Complexity = O(log min(n1, n2)), because the number of recursive calls is equivalent to the depth of the call
        stack in this case.
    */
    int rem = n1 % n2;
    if (rem == 0)
        return n2;
    return method_2(n2, rem);

    // (or)
    // if (n2 == 0) return n1;
    // return method_2(n2, n1 % n2);
}

int main()
{
    int n1, n2;
    int gcd;
    cout << "Enter the numbers:" << endl;
    cin >> n1;
    cin >> n2;
    gcd = method_1(n1, n2);
    cout << "Method 1 Result: " << gcd << endl;
    gcd = method_2(n1, n2);
    cout << "Method 2 Result: " << gcd << endl;
    return 0;
}