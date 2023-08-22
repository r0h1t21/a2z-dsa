'''
    Solution for the problem: https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435
'''


def method_1(n, m, factorial):
    '''
        Recursive approach
        Time Complexity = O(m), where 'm' is the number of factorial numbers less than n
        Space Complexity = O(m), where 'm' is the number of factorial numbers less than n
    '''
    if factorial > n:
        return factorial_nums_rec
    factorial_nums_rec.append(factorial)
    factorial *= (m + 1)

    return method_1(n, m + 1, factorial)


def method_2(n):
    '''
        Iterative approach
        Time Complexity = O(m), where 'm' is the number of factorial numbers less than n
        Space Complexity = O(m), where 'm' is the number of factorial numbers less than n
    '''
    factorial = 1
    factorial_nums = []
    for i in range(1, n + 1):
        factorial *= i
        if factorial > n:
            break
        factorial_nums.append(factorial)

    return factorial_nums


global factorial_nums_rec
factorial_nums_rec = []
print("Enter the number: ")
n = int(input())
method_1(n, 1, 1)
print("\nMethod 1 Result:", end=" ")
for i in factorial_nums_rec:
    print(i, end=" ")
factorial_nums = method_2(n)
print("\nMethod 2 Result:", end=" ")
for i in factorial_nums:
    print(i, end=" ")
