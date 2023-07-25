#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> ust;

    // Insert into unordered set
    ust.insert(3);
    ust.insert(1);  // Unlike sets, unordered sets doesn't store elements in sorted order
    ust.emplace(1); // Unordered set stores unique elements
    ust.insert(4);
    ust.emplace(2);
    ust.insert(5);
    ust.insert(5); // Unordered set stores unique elements

    // Iterate over the unordered set
    cout << "Unordered set: ";
    for (auto v : ust)
    {
        cout << v << " ";
    }
    cout << endl;

    // FInd elements in a unordered set
    auto it1 = ust.find(3); // Returns an iterator
    auto it2 = ust.find(6); // Returns ust.end() if the element doesn't exist

    // Find count of an element in a unordered set (it will be either 1 or 0, since it can either exist one time or doesn't exist at all in the unordered set)
    cout << "Count of 4 in the unordered set: " << ust.count(4) << endl;

    // Remove elements from a unordered set
    ust.erase(4); // Removing the element by passing the element to the erase() method ---> O(logn)
    cout << "Removing 4 by passing 4 to the erase() method: " << endl
         << "\tUnordered Set: ";
    for (auto v : ust)
    {
        cout << v << " ";
    }
    cout << endl;
    ust.erase(it1); // Removing the element by passing the iterator - pointing to the element - to the erase() method ---> O(1)
    cout << "Removing 3 by passing the iterator - pointing to 3 - to the erase() method: " << endl
         << "\tUnordered Set: ";
    for (auto v : ust)
    {
        cout << v << " ";
    }
    cout << endl;
    auto it3 = ust.find(2);
    auto it4 = ust.find(5);
    ust.erase(it3, it4); // Removing range of elements from the set (works like splice in Python)
    cout << "Removing elements from 2 until 5 (not included): " << endl
         << "\tUnordered Set: ";
    for (auto v : ust)
    {
        cout << v << " ";
    }
    cout << endl;

    /* lower_bound() and upper_bound() methods can't be used with unordered list (because they are not sorted)*/

    return 0;
}