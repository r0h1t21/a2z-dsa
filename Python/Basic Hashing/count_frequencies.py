'''
    Solution for the problem: https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446
    Array Hashing approach
    Time Complexity = O(n)
    Space Complexity = O(n)
'''


def process_list_input(i):
    if i.isdigit() and int(i) < x:
        return int(i)
    else:
        return 0


def countFrequency(n, x, nums):
    frequencies = [0] * n
    for i in nums:
        if i < n:
            frequencies[i - 1] += 1

    return frequencies


print("Enter the size of input array: ")
n = int(input())
print("Enter the max range of values in the array (1 - max): ")
x = int(input())
print("Enter the values for the array: ")
nums = list(map(process_list_input, input().split()))
nums = [i for i in nums if i]
nums = nums[:n]
print("Input array:", nums)
while len(nums) < n:
    print("Re-enter the values for the array within the max range: ")
    nums = list(map(process_list_input, input().split()))
    nums = [i for i in nums if i]
    nums = nums[:n]
    print("Input array:", nums)
frequencies = countFrequency(n, x, nums)
print("Frequency of, ")
for i in range(1, n + 1):
    print(i, "->", frequencies[i - 1])
