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
        The quotient of a division by one of the divisors is actually another divisor. And the square root of the number
        acts like the splitting part of all the divisors of that number.
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

void method_2_sorted(int n)
{
    /*
        To sort the result we need to use a vector, because we don't know the number of divisors of a number
        beforehand.
        The time complexity for each part of the code would be,
            1) O(√n) for the loop to fetch all the divisors
            2) O(mlogm) for sorting the vector of divisors, where "m" is the number of divisors
            3) O(m) for printing all the divisors, where "m" is the number of divisors
        Since number of divisors (m) is bounded by 2√n, i.e., m <= 2√n (because we iterate until √n and get half of the divisors)
        So, the total time complexity would be O(√n) + O(mlogm) + O(m),
            => O(√n) + O(2√nlog(2√n)) + O(2√n)
            => O(√n + √nlogn), after getting rid of constants
            => O(√nlogn)
        The total space complexity would be O(m) for the vector of divisors
            => O(2√n)
            => O(√n), after getting rid of constants
        Time Complexity = O(√nlogn)
        Space Complexity = O(√n)
    */
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for (auto i : divisors)
        cout << i << " ";
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
    cout << endl;
    cout << "Method 2 Result (Sorted): ";
    method_2_sorted(n);

    return 0;
}