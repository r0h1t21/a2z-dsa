import math


def method_1(n):
    '''
        Time Complexity = O(n)
        Space Complexity = O(1)
    '''
    for i in range(1, n + 1):
        if n % i == 0:
            print(i, end=" ")


def method_2(n):
    '''
        The quotient of a division by one of the divisors is actually another divisor. And the square root of a number
        acts like the splitting part of all the divisors of a number.
        Time Complexity = O(√n)
        Space Complexity = O(1)
    '''
    for i in range(1, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            print(i, end=" ")
            if i != n // i:
                print(n // i, end=" ")


print("Enter the number:")
n = int(input())
print("Method 1 Result:", end=" ")
method_1(n)
print("\nMethod 2 Result:", end=" ")
method_2(n)
