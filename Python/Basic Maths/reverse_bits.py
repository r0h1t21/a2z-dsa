'''
    Solution for the problem: https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
    Time Complexity = O(1)
    Space Complexity = O(1)
'''

print("Enter the number:")
n = int(input())
bin = 1
index = 31
reverse = 0
bits = [0] * (index + 1)

while n > 0:
    bits[index] = n % 2
    index -= 1
    n = n // 2

for i in bits:
    reverse += i * bin
    bin *= 2

print("Reversed number is:", reverse)
