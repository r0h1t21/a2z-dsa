#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720
*/

int method_1(int n)
{
    /*
        Time Complexity = O(n√n)
        Space Complexity = O(1)
    */
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
                if (j != i / j)
                    sum += i / j;
            }
        }
    }

    return sum;
}

int method_2(int n)
{
    /*
        If "n" is the given number and let's say sum of all the divisors for 1 to n is F(n).
        Then F(n) = floor(n / i) * i, because from high school mathematics we know that,
        in a range of 1 to n, the number of multiples of i is nothing but floor(n / i).
        For example, the number of 10 multiples in the range of 1 to 100 = floor(100 / 10) = 10,
        and those multiples are 10, 20, 30, 40, 50, 60, 70, 80, 90, 100.
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (n / i) * i;
    }

    return sum;
}

int method_3(int n)
{
    /*
        Refer,
            https://discuss.codechef.com/t/sum-of-divisors-of-all-numbers-less-than-n-in-less-than-o-n-time/65944/18?page=2

            https://codeforces.com/blog/entry/53925

            https://codeforces.com/blog/entry/72945?locale=en
    */
}

int main()
{
    int n;
    int sum;
    cout << "Enter the number:" << endl;
    cin >> n;
    sum = method_1(n);
    cout << "Method 1 Result: " << sum << endl;
    sum = method_2(n);
    cout << "Method 2 Result: " << sum << endl;

    return 0;
}