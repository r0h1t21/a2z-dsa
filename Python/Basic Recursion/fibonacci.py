def fibonacci_num(n):
    if n <= 1:
        return n

    return fibonacci_num(n - 1) + fibonacci_num(n - 2)


print("Enter the number: ")
n = int(input())
print("The Fibonacci number is: ", fibonacci_num(n))
