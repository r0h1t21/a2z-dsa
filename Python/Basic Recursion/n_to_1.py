def print_nums(n, m):
    if n == m:
        return
    print(n - m, end=" ")
    print_nums(n, m + 1)


print("Enter the number: ")
n = int(input())
print_nums(n, 0)
