def method_1(n1, n2):
    '''
        Traverse from 1 to min(n1, n2) and check for every number
        Time Complexity = O(n), where n is min(n1, n2)
        Space Complexity = O(1)
    '''
    for i in range(1, min(n1, n2) + 1):
        if n1 % i == 0 and n2 % i == 0:
            gcd = i

    return gcd


def method_2(n1, n2):
    '''
        Euclidean Algorithm (https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm)
        Time Complexity = O(log min(n1, n2)), because the number of recursive calls is bounded by the number of bits required to
        represent the smaller of the two numbers. This is because, in each recursive call, value of 'n2' is reduced by a factor
        of atleast 2.
        Space Complexity = O(log min(n1, n2)), because the number of recursive calls is equivalent to the depth of the call
        stack in this case.
    '''
    if n2 == 0:
        return n1
    return method_2(n2, n1 % n2)


print("Enter the numbers:")
n1, n2 = list(map(int, input().split()))
gcd = method_1(n1, n2)
print("Method 1 Result:", gcd)
gcd = method_2(n1, n2)
print("Method 2 Result:", gcd)
