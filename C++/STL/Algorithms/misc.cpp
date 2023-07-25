#include <bits/stdc++.h>

using namespace std;

int main()
{
    // __builtin_popcount() returns the number of 1s in the binary format of an integer
    int num1 = 7;
    int count1 = __builtin_popcount(num1);
    cout << "Number of 1s in the binary format of " << num1 << " = " << count1 << endl;
    // __builtin_popcountll() returns the number of 1s in the binary format of a long
    long long num2 = 16627872673;
    int count2 = __builtin_popcount(num2);
    cout << "Number of 1s in the binary format of " << num2 << " = " << count2 << endl;

    // Get all permutations of a string (using its characters)
    string s = "123"; // Make sure the string is sorted lexicographically otherwise sort it using sort() function
    cout << "All the permutation of the string '" << s << "': { ";
    do
    {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));
    cout << "}" << endl;

    // FInd the max element in an array
    int a[] = {4, 23, 17, 36, 9, 12};
    int max = *max_element(a, a + 6);

    return 0;
}