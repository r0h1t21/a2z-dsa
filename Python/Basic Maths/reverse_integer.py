'''
    Solution for the problem: https://leetcode.com/problems/reverse-integer/
'''


def method_1(n):
    '''
        Time Complexity = O(log n)
        Space Complexity = O(1)
    '''
    reverse = 0
    num = n
    if n < 0:
        num = 0 - n
    while num != 0:
        digit = num % 10
        '''
            1) Checking for overflow
                i) If "reversed" is already "greater than INT32_MAX / 10", multiplying it by 10 and 
                adding a digit would result in overflow.
                ii) If "reversed" is "equal to INT32_MAX / 10", the last digit should not exceed 7.
            2) Here we are not checking for negative numbers because in Python, integer division and modulus for negative
            numbers behave differently when compared with C/C++/JAVA/JavaScript.
                i) In Python,
                    mod = n - math.floor(n/base) * base
                ii) In C/C++/JAVA/JavaScript,
                    mod = n - int(n/base) * base
        '''
        if reverse > (2**31 - 1) // 10 or (reverse == (2**31 - 1) // 10 and digit > 7):
            return 0
        reverse = reverse * 10 + digit
        num = num // 10
    if n < 0:
        reverse = 0 - reverse

    return reverse


def method_2(n):
    '''
        Time Complexity = O(log n)
        Space Complexity = O(log n)
    '''
    if n < 0:
        num = str(0 - n)
    else:
        num = str(n)
    num_list = list(num)
    for i in range(len(num_list) // 2):
        num_list[i], num_list[len(
            num_list) - i - 1] = num_list[len(num_list) - i - 1], num_list[i]
    num = "".join(num_list)
    reverse = int(num)
    if reverse < 2**31 - 1 and reverse > -2**31:
        if n < 0:
            return 0 - reverse
        else:
            return reverse
    else:
        return 0


print("Enter the number:")
n = int(input())
reverse = method_1(n)
print("Method 1 Result:", reverse)
reverse = method_2(n)
print("Method 2 Result:", reverse)
