#include <bits/stdc++.h>

using namespace std;

/*
    Extract digits and calculate the count
    Time Complexity = O(log n)
    Space Complexity = O(1)
*/
int count_digits_method_1(int n)
{
    int digit;
    int num = n;
    int count = 0;
    while (num > 0)
    {
        digit = num % 10; // This line can be removed because we are not using it calculate count of digits
        count++;
        num = num / 10;
    }

    return count;
}

/*
    Calculate the step (greatest integer function) of log base 10 of the number which would give the
    number of digits (Since logarithm base 10 of any value is nothing but the exponent to which 10
    must be raised to yield the given number)
    Time Complexity = O(1)
    Space Complexity = O(1)
*/
int count_digits_method_2(int n)
{
    return int(log10(n) + 1);
}

/*
    Convert the integer to string and calculate length of the string
    Time Complexity = O(1)
    Space Complexity = O(1)
*/
int count_digits_method_3(int n)
{
    string num = to_string(n);

    return num.length();
}

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int out1 = count_digits_method_1(n);
    cout << "Method 1 Result: " << out1 << endl;
    int out2 = count_digits_method_2(n);
    cout << "Method 2 Result: " << out2 << endl;
    int out3 = count_digits_method_3(n);
    cout << "Method 3 Result: " << out3;

    return 0;
}