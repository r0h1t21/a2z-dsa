import math


def method_1(n):
    '''
        Time Complexity = O(n)
        Space Complexity = O(1)
    '''
    if n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False

    return True


def method_2(n):
    '''
        The quotient of a division by one of the divisors is actually another divisor. And the square root of a number
        acts like the splitting part of all the divisors of a number. So if there are no divisors until √n, then n
        will be a prime number.
        Time Complexity = O(√n)
        Space Complexity = O(1)
    '''
    if n == 1:
        return False
    for i in range(2, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True


print("Enter the number:")
n = int(input())
is_prime = method_1(n)
print("(Method 1) Is {} a prime number?:".format(n), is_prime)
is_prime = method_2(n)
print("(Method 2) Is {} a prime number?:".format(n), is_prime)
