#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> ms;

    // Insert into multiset
    ms.insert(3);
    ms.insert(1);  // Multiset stores elements in sorted order
    ms.emplace(1); // Unlike set, multiset can store duplicate elements
    ms.insert(4);
    ms.emplace(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5); // Unlike set, multiset can store duplicate elements

    // Iterate over the multiset
    cout << "Multiset: ";
    for (auto v : ms)
    {
        cout << v << " ";
    }
    cout << endl;

    // Remove elements from a multiset
    multiset<int> ms1 = ms;
    ms1.erase(5); // If the element is passed directly, then all its occurences will be removed
    cout << "Remove all occurences of 5 from the multiset: " << endl
         << "\tMultiset: ";
    for (auto v : ms1)
    {
        cout << v << " ";
    }
    cout << endl;
    multiset<int> ms2 = ms;
    ms2.erase(ms2.find(5)); // If the iterator pointing to the element is passed, then only that element will be removed
    cout << "Remove one occurence of 5 from the multiset: " << endl
         << "\tMultiset: ";
    for (auto v : ms2)
    {
        cout << v << " ";
    }
    cout << endl;
    multiset<int> ms3 = ms;
    auto it = ms3.find(5);
    it++;
    it++;
    ms3.erase(ms3.find(5), it); // If the starting iterator and ending iterator is passed, then that range of elements will be removed
    cout << "Remove two occurences of 5 from the multiset: " << endl
         << "\tMultiset: ";
    for (auto v : ms3)
    {
        cout << v << " ";
    }
    cout << endl;

    // Lower and Upper bound in a multiset
    cout << "Lower bounds:" << endl;
    auto it1 = ms.lower_bound(1);
    cout << "\tLower bound of element 1: " << *it1 << endl;
    auto it2 = ms.lower_bound(2);
    cout << "\tLower bound of element 2: " << *it2 << endl;
    auto it3 = ms.lower_bound(5);
    cout << "\tLower bound of element 5: " << *it3 << endl;
    auto it4 = ms.lower_bound(6);
    cout << "\tLower bound of element 6: " << *it4 << " (Since 6 doesn't exist in the set, the element outside of the set, which is garbage value, is printed)" << endl;
    cout << "Upper bounds:" << endl;
    auto it5 = ms.upper_bound(1);
    cout << "\tUpper bound of element 1: " << *it5 << endl;
    auto it6 = ms.upper_bound(2);
    cout << "\tUpper bound of element 2: " << *it6 << endl;
    auto it7 = ms.upper_bound(5);
    cout << "\tUpper bound of element 5: " << *it7 << " (Since upper bound of 5 doesn't exist in the set, the element outside of the set, which is garbage value, is printed)" << endl;
    auto it8 = ms.upper_bound(6);
    cout << "\tUpper bound of element 6: " << *it8 << " (Since 6 doesn't exist in the set, the element outside of the set, which is garbage value, is printed)" << endl;

    return 0;
}