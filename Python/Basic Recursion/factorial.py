def method_1(n):
    '''
        Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
    '''
    if n == 1:
        return 1

    return n * method_1(n - 1)


def method_2(n):
    '''
        Iterative approach
        Time Complexity = O(n)
        Space Complexity = O(1)
    '''
    factorial = 1
    for i in range(1, n + 1):
        factorial *= i

    return factorial


print("Enter the number: ")
n = int(input())
factorial = method_1(n)
print("Method 1 Result:", factorial)
factorial = method_2(n)
print("Method 2 Result:", factorial)
