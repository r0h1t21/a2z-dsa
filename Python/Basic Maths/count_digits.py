import math


def count_digits_method_1(n):
    '''
        Extract digits and calculate the count
        Time Complexity = O(log n)
        Space Complexity = O(1)
    '''
    num = n
    count = 0
    while num > 0:
        # This line can be removed because we are not using it calculate count of digits
        digit = num % 10
        count += 1
        num = num // 10

    return count


def count_digits_method_2(n):
    '''
        Calculate the step (greatest integer function) of log base 10 of the number which would give the
        number of digits (Since logarithm base 10 of any value is nothing but the exponent to which 10
        must be raised to yield the given number)
        Time Complexity = O(1)
        Space Complexity = O(1)
    '''

    return math.floor(math.log10(n) + 1)


def count_digits_method_3(n):
    '''
        Convert the integer to string and calculate length of the string
        Time Complexity = O(1)
        Space Complexity = O(1)
    '''
    num = str(n)

    return len(num)


print("Enter the number:")
n = int(input())
out1 = count_digits_method_1(n)
print(out1)
out2 = count_digits_method_2(n)
print(out2)
out3 = count_digits_method_3(n)
print(out3)
