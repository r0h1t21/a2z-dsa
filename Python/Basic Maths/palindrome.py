'''
    Solution for the problem: https://leetcode.com/problems/palindrome-number/
'''


def method_1(n):
    '''
        Compare the input and reverse of it
        Time Complexity = O(log n)
        Space Complexity = O(1)
    '''
    if n > 0:
        num = n
        reverse = 0
        while num != 0:
            reverse = reverse * 10 + (num % 10)
            num //= 10
        if reverse == n:
            return True
        else:
            return False
    else:
        return False


def method_2(n):
    '''
        Convert the number to string and compare i th character with (length(n) - i - 1) th character
        Time Complexity = O(log n)
        Space Complexity = O(log n)
    '''
    if n > 0:
        num = str(n)
        num_list = list(num)
        for i in range(len(num_list) // 2):
            if num_list[i] != num_list[len(num_list) - i - 1]:
                return False
        return True
    else:
        return False


print("Enter the number:")
n = int(input())
is_palindrome = method_1(n)
print("(Method 1) Is {} a palindrome?:".format(n), is_palindrome)
is_palindrome = method_2(n)
print("(Method 2) Is {} a palindrome?:".format(n), is_palindrome)
