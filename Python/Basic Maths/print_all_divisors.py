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


def method_2_sorted(n):
    '''
        To sort the result we need to use a list, 
        The time complexity for each part of the code would be,
            1) O(√n) for the loop to fetch all the divisors
            2) O(mlogm) for sorting the list of divisors, where "m" is the number of divisors
            3) O(m) for printing all the divisors, where "m" is the number of divisors
        Since number of divisors (m) is bounded by 2√n, i.e., m <= 2√n (because we iterate until √n and get half of the divisors)
        So, the total time complexity would be O(√n) + O(mlogm) + O(m),
            => O(√n) + O(2√nlog(2√n)) + O(2√n)
            => O(√n + √nlogn), after getting rid of constants
            => O(√nlogn)
        The total space complexity would be O(m) for the list of divisors
            => O(2√n)
            => O(√n), after getting rid of constants
        Time Complexity = O(√nlogn)
        Space Complexity = O(√n)
    '''
    divisors = []
    for i in range(1, math.floor(math.sqrt(n)) + 1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:
                divisors.append(n // i)
    divisors.sort()
    for i in divisors:
        print(i, end=" ")


print("Enter the number:")
n = int(input())
print("Method 1 Result:", end=" ")
method_1(n)
print("\nMethod 2 Result:", end=" ")
method_2(n)
print("\nMethod 2 Result (Sorted):", end=" ")
method_2_sorted(n)
