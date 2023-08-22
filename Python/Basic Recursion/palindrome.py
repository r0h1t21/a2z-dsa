'''
    Solution for the problem: https://leetcode.com/problems/valid-palindrome/description/
    Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
'''


def palindrome(string, n, i):
    if i >= n // 2:
        return True
    if string[i] != string[n - i - 1]:
        return False
    return palindrome(string, n, i + 1)


print("Enter the string: ")
string = input()
string = ''.join(filter(str.isalnum, string)).lower()
print(palindrome(string, len(string), 0))
