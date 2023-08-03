'''
    Solution for the Problem: https://www.codingninjas.com/studio/problems/check-armstrong_589
'''


def checkArmstrong(n):
    '''
        Time Complexity = O(log n)
        Space Complexity = O(1)
    '''
    num = n
    powerSum = 0
    num_str = str(n)
    while num != 0:
        powerSum += (num % 10) ** (len(num_str))
        num //= 10
    if powerSum == n:
        return True
    else:
        return False


print("Enter the number:")
n = int(input())
is_armstrong = checkArmstrong(n)
print("Is {} an armstrong number?:".format(n), is_armstrong)
