import copy

'''
    Solution for the problem: https://www.codingninjas.com/studio/problems/reverse-an-array_8365444
'''


def method_1(n, i, nums):
    '''
        Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
    '''
    if i >= n // 2:
        return nums
    nums[i], nums[n - i - 1] = nums[n - i - 1], nums[i]

    return method_1(n, i + 1, nums)


def method_2(n, nums):
    '''
        Iterative approach
        Time Complexity = O(n)
        Space Complexity = O(1)
    '''
    for i in range(n // 2):
        nums[i], nums[n - i - 1] = nums[n - i - 1], nums[i]


print("Enter size of the list of numbers: ")
n = int(input())
print("Enter the numbers: ")
nums1 = list(map(int, input().split()))
nums2 = copy.deepcopy(nums1)
method_1(n, 0, nums1)
print("Method 1 Result:", end=" ")
for i in nums1:
    print(i, end=" ")
method_2(n, nums2)
print("\nMethod 2 Result:", end=" ")
for i in nums2:
    print(i, end=" ")
