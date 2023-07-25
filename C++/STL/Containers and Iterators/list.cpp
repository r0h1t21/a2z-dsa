#include <bits/stdc++.h>

using namespace std;

int main()
{
     //** Declaration and initialization **//
     list<int> l1 = {2, 35, 871, 6094};
     list<int> l2(4, 100);
     list<int> l3(4);
     list<char> l4 = {'b', 'y', 'd', 'o'};
     list<pair<int, char>> l5(4);

     //** Iteration **//
     cout << "Iteration:";
     // Iteration using iterators
     cout << endl
          << "\tList 1: ";
     for (list<int>::iterator it = l1.begin(); it != l1.end(); it++)
     {
          cout << *it << " ";
     }
     // Note: "auto" can be used inplace of data types. The data type is determined based on the data the variable is initialized with
     cout << endl
          << "\tList 2: ";
     for (auto it = l2.begin(); it != l2.end(); it++)
     {
          cout << *it << " ";
     }
     // Iteration using for each loop
     cout << endl
          << "\tList 3: ";
     for (auto i : l3)
     {
          cout << i << " ";
     }

     //** Insertion **//
     cout << endl
          << "Insertion:";
     // Insertion default values into list during declaration
     list<int> l(2, 50);
     cout << endl
          << "\tMethod 1: ";
     for (auto i : l)
     {
          cout << i << " ";
     }
     // Insertion at the end of the list
     cout << endl
          << "\tMethod 2: ";
     l.push_back(78);
     for (auto i : l)
     {
          cout << i << " ";
     }
     cout << endl
          << "\tMethod 3: ";
     l.emplace_back(24);
     for (auto i : l)
     {
          cout << i << " ";
     }
     // Insertion at the beginning of the list
     cout << endl
          << "\tMethod 4: ";
     l.push_front(18);
     for (auto i : l)
     {
          cout << i << " ";
     }
     cout << endl
          << "\tMethod 5: ";
     l.emplace_front(49);
     for (auto i : l)
     {
          cout << i << " ";
     }
     // Insertion into list using insert() function
     list<int>::iterator it = l.begin();
     advance(it, 1);
     l.insert(it, 83); // Insert element at a position
     cout << endl
          << "\tMethod 6: ";
     for (auto i : l)
     {
          cout << i << " ";
     }
     it = l.begin();
     advance(it, 2);
     l.insert(it, 3, 56); // Insert an element 'n' times at a position
     cout << endl
          << "\tMethod 7: ";
     for (auto i : l)
     {
          cout << i << " ";
     }
     l.insert(l.end(), l1.begin(), l1.end()); // Insert elements of a list inside another list (similar to 'extend()' method in Python)
     cout << endl
          << "\tMethod 8: ";
     for (auto i : l)
     {
          cout << i << " ";
     }

     //** Deletion **//
     cout << endl
          << "Deletion:";
     // Delete last element of the list
     l.pop_back();
     cout << endl
          << "\tMethod 1: ";
     for (auto i : l)
     {
          cout << i << " ";
     }
     // Deletion from list using erase() function
     it = l.begin();
     advance(it, 10);
     list<int>::iterator it1 = l.begin();
     advance(it1, 13);
     l.erase(it, it1); // Delete from a list using range of indices (similar to 'slice()' method in Python - without 'step' argument)
     cout << endl
          << "\tMethod 2: ";
     for (auto i : l)
     {
          cout << i << " ";
     }
     it = l.begin();
     advance(it, 4);
     l.erase(it); // Delete from list at a position
     cout << endl
          << "\tMethod 3: ";
     for (auto i : l)
     {
          cout << i << " ";
     }

     //** Other useful functions **//
     cout << endl
          << "Other useful functions:";
     // Find size of list
     cout << endl
          << "\tSize of list: " << l.size();
     // Swap two lists
     cout << endl
          << "\tBefore swapping lists: ";
     cout << endl
          << "\t\tFirst list: ";
     for (auto i : l2)
     {
          cout << i << " ";
     }
     cout << endl
          << "\t\tSecond list: ";
     for (auto i : l3)
     {
          cout << i << " ";
     }
     cout << endl
          << "\tAfter swapping lists: ";
     l2.swap(l3);
     cout << endl
          << "\t\tFirst list: ";
     for (auto i : l2)
     {
          cout << i << " ";
     }
     cout << endl
          << "\t\tSecond list: ";
     for (auto i : l3)
     {
          cout << i << " ";
     }
     // Fetch the last element of the list
     cout << endl
          << "\tLast element of the list: " << l.back();
     // Fetch the first element of the list
     cout << endl
          << "\tFirst element of the list: " << l.front();
     // Empty the list
     l.clear();
     cout << endl
          << "\tEmpty the list: ";
     for (auto i : l)
     {
          cout << i << " ";
     }
     // Check if the list is empty
     cout << endl
          << "\tIs list empty?: ";
     if (l.empty())
          cout << "Yes";
     else
     {
          cout << "No";
          cout << endl
               << "\t\tHere's the list: ";
          for (auto i : l)
          {
               cout << i << " ";
          }
     }

     return 0;
}