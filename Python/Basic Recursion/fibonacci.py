'''
    Solution for the problem: https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617
    Recursive approach
        Time Complexity = O(n)
        Space Complexity = O(n)
'''


def fibonacciNumbers(fibonacciNumsList, n, i):
    if i >= n:
        return fibonacciNumsList
    fibonacciNumsList.append(
        fibonacciNumsList[i - 1] + fibonacciNumsList[i - 2])
    return fibonacciNumbers(fibonacciNumsList, n, i + 1)


print("Enter the number: ")
n = int(input())
fibonacciNumsList = []
fibonacciNumsList.append(0)
if n > 1:
    fibonacciNumsList.append(1)
    fibonacciNumbers(fibonacciNumsList, n, 2)
print("Fibonacci numbers:", end=" ")
for i in fibonacciNumsList:
    print(i, end=" ")
