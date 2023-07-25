#include <bits/stdc++.h>

using namespace std;

int main()
{
    //** Declaration and initialization **//
    deque<int> dq1 = {2, 35, 871, 6094};
    deque<int> dq2(4, 100);
    deque<int> dq3(4);
    deque<char> dq4 = {'b', 'y', 'd', 'o'};
    deque<pair<int, char>> dq5(4);

    //** Iteration **//
    cout << "Iteration:";
    // Iteration using iterators
    cout << endl
         << "\tList 1: ";
    for (deque<int>::iterator it = dq1.begin(); it != dq1.end(); it++)
    {
        cout << *it << " ";
    }
    // Note: "auto" can be used inplace of data types. The data type is determined based on the data the variable is initialized with
    cout << endl
         << "\tList 2: ";
    for (auto it = dq2.begin(); it != dq2.end(); it++)
    {
        cout << *it << " ";
    }
    // Iteration using for each loop
    cout << endl
         << "\tList 3: ";
    for (auto i : dq3)
    {
        cout << i << " ";
    }

    //** Insertion **//
    cout << endl
         << "Insertion:";
    // Insertion default values into list during declaration
    deque<int> dq(2, 50);
    cout << endl
         << "\tMethod 1: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    // Insertion at the end of the list
    cout << endl
         << "\tMethod 2: ";
    dq.push_back(78);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl
         << "\tMethod 3: ";
    dq.emplace_back(24);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    // Insertion at the beginning of the list
    cout << endl
         << "\tMethod 4: ";
    dq.push_front(18);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl
         << "\tMethod 5: ";
    dq.emplace_front(49);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    // Insertion into list using insert() function
    deque<int>::iterator it = dq.begin();
    advance(it, 1);
    dq.insert(it, 83); // Insert element at a position
    cout << endl
         << "\tMethod 6: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    it = dq.begin();
    advance(it, 2);
    dq.insert(it, 3, 56); // Insert an element 'n' times at a position
    cout << endl
         << "\tMethod 7: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    dq.insert(dq.end(), dq1.begin(), dq1.end()); // Insert elements of a list inside another list (similar to 'extend()' method in Python)
    cout << endl
         << "\tMethod 8: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }

    //** Deletion **//
    cout << endl
         << "Deletion:";
    // Delete last element of the list
    dq.pop_back();
    cout << endl
         << "\tMethod 1: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    // Deletion from list using erase() function
    it = dq.begin();
    advance(it, 10);
    deque<int>::iterator it1 = dq.begin();
    advance(it1, 13);
    dq.erase(it, it1); // Delete from a list using range of indices (similar to 'slice()' method in Python - without 'step' argument)
    cout << endl
         << "\tMethod 2: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    it = dq.begin();
    advance(it, 4);
    dq.erase(it); // Delete from list at a position
    cout << endl
         << "\tMethod 3: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }

    //** Other useful functions **//
    cout << endl
         << "Other useful functions:";
    // Find size of list
    cout << endl
         << "\tSize of list: " << dq.size();
    // Swap two lists
    cout << endl
         << "\tBefore swapping lists: ";
    cout << endl
         << "\t\tFirst list: ";
    for (auto i : dq2)
    {
        cout << i << " ";
    }
    cout << endl
         << "\t\tSecond list: ";
    for (auto i : dq3)
    {
        cout << i << " ";
    }
    cout << endl
         << "\tAfter swapping lists: ";
    dq2.swap(dq3);
    cout << endl
         << "\t\tFirst list: ";
    for (auto i : dq2)
    {
        cout << i << " ";
    }
    cout << endl
         << "\t\tSecond list: ";
    for (auto i : dq3)
    {
        cout << i << " ";
    }
    // Fetch the last element of the list
    cout << endl
         << "\tLast element of the list: " << dq.back();
    // Fetch the first element of the list
    cout << endl
         << "\tFirst element of the list: " << dq.front();
    // Empty the list
    dq.clear();
    cout << endl
         << "\tEmpty the list: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    // Check if the list is empty
    cout << endl
         << "\tIs list empty?: ";
    if (dq.empty())
        cout << "Yes";
    else
    {
        cout << "No";
        cout << endl
             << "\t\tHere's the list: ";
        for (auto i : dq)
        {
            cout << i << " ";
        }
    }

    return 0;
}