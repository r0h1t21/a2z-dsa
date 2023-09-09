'''
    Solution for the problem: https://leetcode.com/problems/frequency-of-the-most-frequent-element/
    Sliding Window approach
    Time Complexity = O(nlogn)
    Space Complexity = O(n)
'''


def maxFrequency(nums, k, n):
    r, l, total, max_freq = 0, 0, 0, 1
    while l <= r and r < n:
        total += nums[r]
        while nums[r] * (r - l + 1) > total + k:
            total -= nums[l]
            l += 1
        max_freq = max(max_freq, r - l + 1)
        r += 1

    return max_freq


print("Enter the size of array: ")
n = int(input())
print("Enter the values for the array: ")
nums = list(map(int, input().split()))
print("Enter the max number of operations possible: ")
k = int(input())
freq = maxFrequency(nums, k, n)
print(f"Maximum possible frequency after performing {k} operations: {freq}")
