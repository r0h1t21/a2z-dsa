def print_nums(n):
    if n == 0:
        return
    print_nums(n - 1)
    print(n, end=" ")


print("Enter the number: ")
n = int(input())
print_nums(n)
