#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> st;

    // Insert into set
    st.insert(3);
    st.insert(1);  // Set stores elements in sorted order
    st.emplace(1); // Set stores unique elements
    st.insert(4);
    st.emplace(2);
    st.insert(5);
    st.insert(5); // Set stores unique elements

    // Iterate over the set
    cout << "Set: ";
    for (auto v : st)
    {
        cout << v << " ";
    }
    cout << endl;

    // FInd elements in a set
    auto it1 = st.find(3); // Returns an iterator
    auto it2 = st.find(6); // Returns st.end() if the element doesn't exist

    // Find count of an element in a set (it will be either 1 or 0, since it can either exist one time or doesn't exist at all in the set)
    cout << "Count of 4 in the set: " << st.count(4) << endl;

    // Remove elements from a set
    st.erase(4); // Removing the element by passing the element to the erase() method ---> O(logn)
    cout << "Removing 4 by passing 4 to the erase() method: " << endl
         << "\tSet: ";
    for (auto v : st)
    {
        cout << v << " ";
    }
    cout << endl;
    st.erase(it1); // Removing the element by passing the iterator - pointing to the element - to the erase() method ---> O(1)
    cout << "Removing 3 by passing the iterator - pointing to 3 - to the erase() method: " << endl
         << "\tSet: ";
    for (auto v : st)
    {
        cout << v << " ";
    }
    cout << endl;
    auto it3 = st.find(2);
    auto it4 = st.find(5);
    st.erase(it3, it4); // Removing range of elements from the set (works like splice in Python)
    cout << "Removing elements from 2 until 5 (not included): " << endl
         << "\tSet: ";
    for (auto v : st)
    {
        cout << v << " ";
    }
    cout << endl;

    // Lower and Upper bound in a set
    cout << "Lower bounds:" << endl;
    auto it5 = st.lower_bound(1);
    cout << "\tLower bound of element 1: " << *it5 << endl;
    auto it6 = st.lower_bound(2);
    cout << "\tLower bound of element 2: " << *it6 << endl;
    auto it7 = st.lower_bound(5);
    cout << "\tLower bound of element 5: " << *it7 << endl;
    auto it8 = st.lower_bound(6);
    cout << "\tLower bound of element 6: " << *it8 << " (Since 6 doesn't exist in the set, the element outside of the set, which is garbage value, is printed)" << endl;
    cout << "Upper bounds:" << endl;
    auto it9 = st.upper_bound(1);
    cout << "\tUpper bound of element 1: " << *it9 << endl;
    auto it10 = st.upper_bound(2);
    cout << "\tUpper bound of element 2: " << *it10 << endl;
    auto it11 = st.upper_bound(5);
    cout << "\tUpper bound of element 5: " << *it11 << " (Since upper bound of 5 doesn't exist in the set, the element outside of the set, which is garbage value, is printed)" << endl;
    auto it12 = st.upper_bound(6);
    cout << "\tUpper bound of element 6: " << *it12 << " (Since 6 doesn't exist in the set, the element outside of the set, which is garbage value, is printed)" << endl;

    return 0;
}