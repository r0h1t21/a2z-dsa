'''
    Solution for the problem: https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382
    Time Complexity = O(n)
    Space Complexity = O(n)
'''


def getFrequencies(v):
    max = 0
    min = 1000000001
    frequencies = {}
    high_low = [0] * 2
    for i in v:
        if i in frequencies:
            frequencies[i] += 1
        else:
            frequencies[i] = 1
    for i in frequencies:
        if frequencies[i] >= max:
            max = frequencies[i]
        if frequencies[i] <= min:
            min = frequencies[i]
    for i in frequencies:
        if frequencies[i] == max and (high_low[0] == 0 or high_low[0] > i):
            high_low[0] = i
        if frequencies[i] == min and (high_low[1] == 0 or high_low[1] > i):
            high_low[1] = i

    return high_low


print("Enter the size of input array (2 <= size <= 10^4): ")
n = int(input())
print("Enter the values for the array (1 <= value <= 10^9): ")
v = list(map(int, input().split()))
high_low = getFrequencies(v)
print("Element with highest frequency:", high_low[0])
print("Element with lowest frequency:", high_low[1])
