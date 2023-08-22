#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/reverse-an-array_8365444
*/

vector<int> method_1(int n, int i, vector<int> &nums)
{
    /*
        Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
    */
    if (i == n / 2)
        return nums;
    swap(nums[i], nums[n - i - 1]);

    return method_1(n, i + 1, nums);
}

void method_2(int n, vector<int> &nums)
{
    /*
        Iterative approach
        Time Complexity = O(n)
        Space Complexity = O(1)
    */
    for (int i = 0; i < n / 2; i++)
        swap(nums[i], nums[n - i - 1]);
}

int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int n;
    cout << "Enter size of the list of numbers: " << endl;
    cin >> n;
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        nums1.push_back(j);
        nums2.push_back(j);
    }
    method_1(n, 0, nums1);
    cout << "Method 1 Result: ";
    for (auto i : nums1)
        cout << i << " ";
    method_2(n, nums2);
    cout << "\nMethod 2 Result: ";
    for (auto i : nums2)
        cout << i << " ";

    return 0;
}