#include <bits/stdc++.h>

using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (int k = 0; k < (2 * i) - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " "
                 << " ";
        }
        for (int k = 0; k < (2 * i) - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    // // Method 1
    // pattern2(n - 1);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "*" << " ";
    // }
    // cout << endl;
    // pattern5(n - 1);

    // // Method 2
    // pattern2(n);
    // pattern5(n - 1);

    // Method 3
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = (2 * n) - i;

        for (int j = 0; j < stars; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int out;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            out = 1;
        else
            out = 0;
        cout << out << " ";
        for (int j = 0; j < i; j++)
        {
            out = 1 - out;
            cout << out << " ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " "
                 << " ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int out = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ++out << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    if (n <= 26)
    {
        // // Method 1
        // for (int i = 65; i < 65 + n; i++)
        // {
        //     for (int j = 65; j <= i; j++)
        //     {
        //         cout << char(j) << " ";
        //     }
        //     cout << endl;
        // }

        // Method 2
        for (int i = 1; i <= n; i++)
        {
            for (char j = 'A'; j < 'A' + i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "n should be greater than 0 and less than or equal to 26";
}

void pattern15(int n)
{
    if (n <= 26)
    {
        // // Method 1
        // for (int i = 65 + n; i > 65; i--)
        // {
        //     for (int j = 65; j < i; j++)
        //     {
        //         cout << char(j) << " ";
        //     }
        //     cout << endl;
        // }

        // Method 2
        for (int i = n; i > 0; i--)
        {
            for (char j = 'A'; j < 'A' + i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "n should be greater than 0 and less than or equal to 26";
}

void pattern16(int n)
{
    if (n <= 26)
    {
        // // Method 1
        // for (int i = 65; i < 65 + n; i++)
        // {
        //     for (int j = 65; j <= i; j++)
        //     {
        //         cout << char(i) << " ";
        //     }
        //     cout << endl;
        // }

        // Method 2
        for (int i = 0; i < n; i++)
        {
            char ch = 'A' + i;
            for (int j = 0; j <= i; j++)
            {
                cout << ch << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "n should be greater than 0 and less than or equal to 26";
}

void pattern17(int n)
{
    if (n <= 26)
    {
        // // Method 1
        // for (int i = 0; i < n; i++)
        // {
        //     char ch = 'A' + i;
        //     for (int j = 1; j < n - i; j++)
        //     {
        //         cout << " "
        //              << " ";
        //     }
        //     for (char k = 'A'; k < ch; k++)
        //     {
        //         cout << k << " ";
        //     }
        //     cout << ch << " ";
        //     for (char l = ch - 1; l >= 'A'; l--)
        //     {
        //         cout << l << " ";
        //     }
        //     cout << endl;
        // }

        // Method 2
        for (int i = 1; i <= n; i++)
        {
            char ch = 'A';
            int breakpoint = ((2 * i) - 1) / 2;

            for (int j = 0; j < n - i; j++)
            {
                cout << " "
                     << " ";
            }
            for (int k = 1; k <= (2 * i) - 1; k++)
            {
                cout << ch << " ";
                if (k <= breakpoint)
                    ch++;
                else
                    ch--;
            }
            cout << endl;
        }
    }
    else
        cout << "n should be greater than 0 and less than or equal to 26";
}

void pattern18(int n)
{
    if (n <= 26)
    {
        for (int i = 0; i < n; i++)
        {
            char ch = 'A' + n - 1;
            for (char j = ch - i; j <= ch; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "n should be greater than 0 and less than or equal to 26";
}

void pattern19(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " "
                 << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " "
                 << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = (2 * n) - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 0; k < 2 * (n - stars); k++)
        {
            cout << " "
                 << " ";
        }
        for (int l = 0; l < stars; l++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch;
        for (int j = 0; j < n; j++)
        {
            if ((i != 0 && j != 0) && (i != n - 1 && j != n - 1))
            {
                ch = ' ';
            }
            else
            {
                ch = '*';
            }
            cout << ch << " ";
        }
        cout << endl
             << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        for (int j = 0; j < (2 * n) - 1; j++)
        {
            int top = i;
            int left = j;
            int bottom = ((2 * n) - 2) - i;
            int right = ((2 * n) - 2) - j;

            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Pattern 1:" << endl;
    pattern1(5);
    cout << endl;

    cout << "Pattern 2:" << endl;
    pattern2(5);
    cout << endl;

    cout << "Pattern 3:" << endl;
    pattern3(5);
    cout << endl;

    cout << "Pattern 4:" << endl;
    pattern4(5);
    cout << endl;

    cout << "Pattern 5:" << endl;
    pattern5(5);
    cout << endl;

    cout << "Pattern 6:" << endl;
    pattern6(5);
    cout << endl;

    cout << "Pattern 7:" << endl;
    pattern7(5);
    cout << endl;

    cout << "Pattern 8:" << endl;
    pattern8(5);
    cout << endl;

    cout << "Pattern 9:" << endl;
    pattern9(5);
    cout << endl;

    cout << "Pattern 10:" << endl;
    pattern10(5);
    cout << endl;

    cout << "Pattern 11:" << endl;
    pattern11(5);
    cout << endl;

    cout << "Pattern 12:" << endl;
    pattern12(4);
    cout << endl;

    cout << "Pattern 13:" << endl;
    pattern13(5);
    cout << endl;

    cout << "Pattern 14:" << endl;
    pattern14(5);
    cout << endl;

    cout << "Pattern 15:" << endl;
    pattern15(5);
    cout << endl;

    cout << "Pattern 16:" << endl;
    pattern16(5);
    cout << endl;

    cout << "Pattern 17:" << endl;
    pattern17(4);
    cout << endl;

    cout << "Pattern 18:" << endl;
    pattern18(5);
    cout << endl;

    cout << "Pattern 19:" << endl;
    pattern19(5);
    cout << endl;

    cout << "Pattern 20:" << endl;
    pattern20(5);
    cout << endl;

    cout << "Pattern 21:" << endl;
    pattern21(4);
    cout << endl;

    cout << "Pattern 22:" << endl;
    pattern22(4);
    cout << endl;

    return 0;
}