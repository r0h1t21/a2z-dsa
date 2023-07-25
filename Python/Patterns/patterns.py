def pattern1(n):
    for _ in range(n):
        for _ in range(n):
            print("*", end=" ")
        print("\n", end="")


def pattern2(n):
    for i in range(n):
        for _ in range(i + 1):
            print("*", end=" ")
        print("\n", end="")


def pattern3(n):
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print("\n", end="")


def pattern4(n):
    for i in range(1, n + 1):
        for _ in range(i):
            print(i, end=" ")
        print("\n", end="")


def pattern5(n):
    for i in range(n - 1, -1, -1):
        for _ in range(i + 1):
            print("*", end=" ")
        print("\n", end="")


def pattern6(n):
    for i in range(n, 0, -1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print("\n", end="")


def pattern7(n):
    for i in range(1, n + 1):
        for _ in range(n - i):
            print(" ", end=" ")
        for _ in range((2 * i) - 1):
            print("*", end=" ")
        print("\n", end="")


def pattern8(n):
    for i in range(n, 0, -1):
        for _ in range(n - i):
            print(" ", end=" ")
        for _ in range((2 * i) - 1):
            print("*", end=" ")
        print("\n", end="")


def pattern9(n):
    pattern7(n)
    pattern8(n)


def pattern10(n):
    # # Method 1
    # pattern2(n - 1)
    # for i in range(n):
    #     print("*", end=" ")
    # print("\n", end="")
    # pattern5(n - 1)

    # # Method 2
    # pattern2(n)
    # pattern5(n - 1)

    # Method 3
    for i in range(1, 2 * n):
        stars = i
        if i > n:
            stars = (2 * n) - i

        for _ in range(stars):
            print("*", end=" ")
        print("\n", end="")


def pattern11(n):
    for i in range(n):
        if i % 2 == 0:
            out = 1
        else:
            out = 0
        print(out, end=" ")

        for _ in range(i):
            out = 1 - out
            print(out, end=" ")
        print("\n", end="")


def pattern12(n):
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        for _ in range(2 * (n - i)):
            print(" ", end=" ")
        for k in range(i, 0, -1):
            print(k, end=" ")
        print("\n", end="")


def pattern13(n):
    out = 0
    for i in range(1, n + 1):
        for _ in range(i):
            out = out + 1
            print(out, end=" ")
        print("\n", end="")


def pattern14(n):
    if n <= 26:
        # # Method 1
        # for i in range(65, 65 + n):
        #     for j in range(65, i + 1):
        #         print(chr(j), end=" ")
        #     print("\n", end="")

        # Method 2
        for i in range(1, n + 1):
            for j in range(ord('A'), ord('A') + i):
                print(chr(j), end=" ")
            print("\n", end="")
    else:
        print("n should be greater than 0 and less than or equal to 26")


def pattern15(n):
    if n <= 26:
        # # Method 1
        # for i in range(65 + n, 65, -1):
        #     for j in range(65, i):
        #         print(chr(j), end=" ")
        #     print("\n", end="")

        # Method 2
        for i in range(n, 0, -1):
            for j in range(ord('A'), ord('A') + i):
                print(chr(j), end=" ")
            print("\n", end="")
    else:
        print("n should be greater than 0 and less than or equal to 26")


def pattern16(n):
    if n <= 26:
        # # Method 1
        # for i in range(65, 65 + n):
        #     for _ in range(65, i + 1):
        #         print(chr(i), end=" ")
        #     print("\n", end="")

        # Method 2
        for i in range(n):
            ch = chr(ord('A') + i)
            for _ in range(i + 1):
                print(ch, end=" ")
            print("\n", end="")
    else:
        print("n should be greater than 0 and less than or equal to 26")


def pattern17(n):
    if n <= 26:
        # # Method 1
        # for i in range(n):
        #     ch = chr(ord('A') + i)
        #     for _ in range(1, n - i):
        #         print(" ", end=" ")
        #     for j in range(ord('A'), ord(ch)):
        #         print(chr(j), end=" ")
        #     print(ch, end=" ")
        #     for k in range(ord(ch) - 1, ord('A') - 1, -1):
        #         print(chr(k), end=" ")
        #     print("\n", end="")

        # Method 2
        for i in range(1, n + 1):
            ch = 'A'
            breakpoint = ((2 * i) - 1) // 2

            for _ in range(n - i):
                print(" ", end=" ")
            for j in range(1, (2 * i)):
                print(ch, end=" ")
                if j <= breakpoint:
                    ch = chr(ord(ch) + 1)
                else:
                    ch = chr(ord(ch) - 1)
            print("\n", end="")
    else:
        print("n should be greater than 0 and less than or equal to 26")


def pattern18(n):
    if n <= 26:
        for i in range(n):
            ch = chr(ord('A') + n - 1)
            for j in range(ord(ch) - i, ord(ch) + 1):
                print(chr(j), end=" ")
            print("\n", end="")
    else:
        print("n should be greater than 0 and less than or equal to 26")


def pattern19(n):
    for i in range(n, 0, -1):
        for _ in range(i):
            print("*", end=" ")
        for _ in range(2 * (n - i)):
            print(" ", end=" ")
        for _ in range(i):
            print("*", end=" ")
        print("\n", end="")

    for i in range(1, n + 1):
        for _ in range(i):
            print("*", end=" ")
        for _ in range(2 * (n - i)):
            print(" ", end=" ")
        for _ in range(i):
            print("*", end=" ")
        print("\n", end="")

    # # Since the above two outer for loops has the same inner for loops we can combine them as follows
    # for i in list(range(n, 0, -1)) + list(range(1, n + 1)):
    #     for _ in range(i):
    #         print("*", end=" ")
    #     for _ in range(2 * (n - i)):
    #         print(" ", end=" ")
    #     for _ in range(i):
    #         print("*", end=" ")
    #     print("\n", end="")


def pattern20(n):
    for i in range(1, 2 * n):
        stars = i
        if i > n:
            stars = (2 * n) - i
        for _ in range(stars):
            print("*", end=" ")
        for _ in range(2 * (n - stars)):
            print(" ", end=" ")
        for _ in range(stars):
            print("*", end=" ")
        print("\n", end="")


def pattern21(n):
    for i in range(n):
        for j in range(n):
            if (i != 0 and j != 0) and (i != n - 1 and j != n - 1):
                ch = " "
            else:
                ch = "*"
            print(ch, end=" ")
        print("\n\n", end="")


def pattern22(n):
    pass


if __name__ == "__main__":
    print("Pattern 1:")
    pattern1(5)
    print("\n", end="")

    print("Pattern 2:")
    pattern2(5)
    print("\n", end="")

    print("Pattern 3:")
    pattern3(5)
    print("\n", end="")

    print("Pattern 4:")
    pattern4(5)
    print("\n", end="")

    print("Pattern 5:")
    pattern5(5)
    print("\n", end="")

    print("Pattern 6:")
    pattern6(5)
    print("\n", end="")

    print("Pattern 7:")
    pattern7(5)
    print("\n", end="")

    print("Pattern 8:")
    pattern8(5)
    print("\n", end="")

    print("Pattern 9:")
    pattern9(5)
    print("\n", end="")

    print("Pattern 10:")
    pattern10(5)
    print("\n", end="")

    print("Pattern 11:")
    pattern11(5)
    print("\n", end="")

    print("Pattern 12:")
    pattern12(4)
    print("\n", end="")

    print("Pattern 13:")
    pattern13(5)
    print("\n", end="")

    print("Pattern 14:")
    pattern14(5)
    print("\n", end="")

    print("Pattern 15:")
    pattern15(5)
    print("\n", end="")

    print("Pattern 16:")
    pattern16(5)
    print("\n", end="")

    print("Pattern 17:")
    pattern17(4)
    print("\n", end="")

    print("Pattern 18:")
    pattern18(5)
    print("\n", end="")

    print("Pattern 19:")
    pattern19(5)
    print("\n", end="")

    print("Pattern 20:")
    pattern20(5)
    print("\n", end="")

    print("Pattern 21:")
    pattern21(4)
    print("\n", end="")

    print("Pattern 22:")
    pattern22(4)
    print("\n", end="")
