#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://leetcode.com/problems/frequency-of-the-most-frequent-element/
    Sliding Window approach
    Time Complexity = O(nlogn)
    Space Complexity = O(n)
*/

int maxFrequency(vector<int> &nums, int k, int n)
{
    sort(nums.begin(), nums.end());
    long long left = 0, right = 0;
    long long freq = 1, total = 0;
    while (left <= right && right < n)
    {
        total += nums[right];
        while ((nums[right] * (right - left + 1)) > (total + k))
        {
            total -= nums[left];
            left++;
        }
        freq = max(freq, (right - left + 1));
        right++;
    }

    return freq;
}

int main()
{
    int buffer, k, freq, n;
    vector<int> nums;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    cout << "Enter the values for the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        nums.push_back(buffer);
    }
    cout << "Enter the max number of operations possible: " << endl;
    cin >> k;
    freq = maxFrequency(nums, k, n);
    cout << "Maximum possible frequency after performing " << k << " operations: " << freq;

    return 0;
}