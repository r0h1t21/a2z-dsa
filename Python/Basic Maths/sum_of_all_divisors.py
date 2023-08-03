import math

'''
    Solution for the problem: https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720
'''


def method_1(n):
    '''
        Time Complexity = O(n√n)
        Space Complexity = O(1)
    '''
    sum = 0
    for i in range(1, n + 1):
        for j in range(1, math.floor(math.sqrt(i)) + 1):
            if i % j == 0:
                sum += j
                if j != i // j:
                    sum += i // j

    return sum


def method_2(n):
    '''
        If "n" is the given number and let's say sum of all the divisors for 1 to n is F(n).
        Then F(n) = floor(n / i) * i, because from high school mathematics we know that,
        in a range of 1 to n, the number of multiples of i is nothing but floor(n / i).
        For example, the number of 10 multiples in the range of 1 to 100 = floor(100 / 10) = 10,
        and those multiples are 10, 20, 30, 40, 50, 60, 70, 80, 90, 100.
        Time Complexity = O(n)
        Space Complexity = O(1)
    '''
    sum = 0
    for i in range(1, n + 1):
        sum += (n // i) * i

    return sum


def method_3(n):
    '''
        Refer,
            https://discuss.codechef.com/t/sum-of-divisors-of-all-numbers-less-than-n-in-less-than-o-n-time/65944/18?page=2

            https://codeforces.com/blog/entry/53925

            https://codeforces.com/blog/entry/72945?locale=en
    '''


print("Enter the number:")
n = int(input())
sum = method_1(n)
print("Method 1 Result:", sum)
sum = method_2(n)
print("Method 2 Result:", sum)
