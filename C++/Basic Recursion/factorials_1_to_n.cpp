#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435
*/

long long factorial = 1;
vector<long long> factorial_nums_rec;

vector<long long> method_1(long long n, long long m)
{
    /*
        Recursive approach
        Time Complexity = O(m), where 'm' is the number of factorial numbers less than n
        Space Complexity = O(m), where 'm' is the number of factorial numbers less than n
    */
    if (factorial > n)
        return factorial_nums_rec;
    factorial_nums_rec.push_back(factorial);
    factorial *= ++m;

    return method_1(n, m);
}
vector<long long> method_2(long long n)
{
    /*
        Iterative approach
        Time Complexity = O(m), where 'm' is the number of factorial numbers less than n
        Space Complexity = O(m), where 'm' is the number of factorial numbers less than n
    */
    factorial = 1;
    vector<long long> factorial_nums;
    for (long long i = 1; i <= n; i++)
    {
        factorial *= i;
        if (factorial > n)
            break;
        factorial_nums.push_back(factorial);
    }

    return factorial_nums;
}

int main()
{
    long long n;
    vector<long long> factorial_nums;
    cout << "Enter the number: " << endl;
    cin >> n;
    method_1(n, 1);
    cout << "Method 1 Result: ";
    for (auto i : factorial_nums_rec)
        cout << i << " ";
    cout << endl;
    factorial_nums = method_2(n);
    cout << "Method 2 Result: ";
    for (auto i : factorial_nums)
        cout << i << " ";
    cout << endl;

    return 0;
}