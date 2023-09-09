#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446
    Array Hashing approach
    Time Complexity = O(n)
    Space Complexity = O(n)
*/

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> frequencies(n, 0);
    for (auto i : nums)
        if (i <= n)
            frequencies[i - 1]++;

    return frequencies;
}

int main()
{
    int n, x, buffer;
    vector<int> nums, frequencies;
    cout << "Enter the size of input array: " << endl;
    cin >> n;
    cout << "Enter the max range of values in the array (1 - max): " << endl;
    cin >> x;
    cout << "Enter the values for the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        if (buffer <= x && buffer >= 1)
            nums.push_back(buffer);
    }
    cout << "Input array: " << endl;
    for (auto i : nums)
        cout << i << " ";
    frequencies = countFrequency(n, x, nums);
    cout << "\nFrequency of, " << endl;
    for (int i = 1; i <= n; i++)
        cout << i << " -> " << frequencies[i - 1] << endl;

    return 0;
}