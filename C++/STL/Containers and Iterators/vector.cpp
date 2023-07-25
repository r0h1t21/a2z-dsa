#include <bits/stdc++.h>

using namespace std;

int main()
{
     //** Declaration and initialization **//
     vector<int> v1 = {2, 35, 871, 6094};
     vector<int> v2(4, 100);
     vector<int> v3(4);
     vector<char> v4 = {'b', 'y', 'd', 'o'};
     vector<pair<int, char>> v5(4);

     //** Iteration **//
     cout << "Iteration:";
     // Iteration similar to arrays
     cout << endl
          << "\tVector 1: ";
     for (int i = 0; i < size(v1); i++)
     {
          cout << v1[i] << " ";
     }
     // Iteration using iterators
     cout << endl
          << "\tVector 2: ";
     for (vector<int>::iterator it = v2.begin(); it < v2.end(); it++)
     {
          cout << *it << " ";
     }
     // Note: "auto" can be used inplace of data types. The data type is determined based on the data the variable is initialized with
     cout << endl
          << "\tVector 3: ";
     for (auto it = v3.begin(); it != v3.end(); it++)
     {
          cout << *it << " ";
     }
     // Iteration using for each loop
     cout << endl
          << "\tVector 4: ";
     for (auto i : v4)
     {
          cout << i << " ";
     }

     //** Insertion **//
     cout << endl
          << "Insertion:";
     // Insertion default values into vector during declaration
     vector<int> v(2, 50);
     cout << endl
          << "\tMethod 1: ";
     for (auto i : v)
     {
          cout << i << " ";
     }
     // Insertion at the end of the vector
     cout << endl
          << "\tMethod 2: ";
     v.push_back(78);
     for (auto i : v)
     {
          cout << i << " ";
     }
     cout << endl
          << "\tMethod 3: ";
     v.emplace_back(24);
     for (auto i : v)
     {
          cout << i << " ";
     }
     // Insertion into vector using insert() function
     v.insert(v.begin() + 1, 83); // Insert element at a position
     cout << endl
          << "\tMethod 4: ";
     for (auto i : v)
     {
          cout << i << " ";
     }
     v.insert(v.begin() + 2, 3, 56); // Insert an element 'n' times at a position
     cout << endl
          << "\tMethod 5: ";
     for (auto i : v)
     {
          cout << i << " ";
     }
     v.insert(v.end(), v1.begin(), v1.end()); // Insert elements of a vector inside another vector (similar to 'extend()' method in Python)
     cout << endl
          << "\tMethod 6: ";
     for (auto i : v)
     {
          cout << i << " ";
     }

     //** Deletion **//
     cout << endl
          << "Deletion:";
     // Delete last element of the vector
     v.pop_back();
     cout << endl
          << "\tMethod 1: ";
     for (auto i : v)
     {
          cout << i << " ";
     }
     // Deletion from vector using erase() function
     v.erase(v.begin() + 8, v.begin() + 11); // Delete from a vector using range of indices (similar to 'slice()' method in Python - without 'step' argument)
     cout << endl
          << "\tMethod 2: ";
     for (auto i : v)
     {
          cout << i << " ";
     }
     v.erase(v.begin() + 2); // Delete from vector at a position
     cout << endl
          << "\tMethod 3: ";
     for (auto i : v)
     {
          cout << i << " ";
     }

     //** Other useful functions **//
     cout << endl
          << "Other useful functions:";
     // Find size of vector
     cout << endl
          << "\tSize of vector: " << v.size();
     // Swap two vectors
     cout << endl
          << "\tBefore swapping vectors: ";
     cout << endl
          << "\t\tFirst vector: ";
     for (auto i : v2)
     {
          cout << i << " ";
     }
     cout << endl
          << "\t\tSecond vector: ";
     for (auto i : v3)
     {
          cout << i << " ";
     }
     cout << endl
          << "\tAfter swapping vectors: ";
     v2.swap(v3);
     cout << endl
          << "\t\tFirst vector: ";
     for (auto i : v2)
     {
          cout << i << " ";
     }
     cout << endl
          << "\t\tSecond vector: ";
     for (auto i : v3)
     {
          cout << i << " ";
     }
     // Fetch the last element of the vector
     cout << endl
          << "\tLast element of the vector: " << v.back();
     // Empty the vector
     v.clear();
     cout << endl
          << "\tEmpty the vector: ";
     for (auto i : v)
     {
          cout << i << " ";
     }
     // Check if the vector is empty
     cout << endl
          << "\tIs vector empty?: ";
     if (v.empty())
          cout << "Yes";
     else
     {
          cout << "No";
          cout << endl
               << "\t\tHere's the vector: ";
          for (auto i : v)
          {
               cout << i << " ";
          }
     }

     return 0;
}