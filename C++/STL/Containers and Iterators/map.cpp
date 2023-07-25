#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mp1;
    map<pair<int, int>, int> mp2;
    map<int, pair<int, int>> mp3;

    // Insert into map
    mp1[1] = 2; // You can directly create key and assign value (or)
    mp1[1] = 4; // Update the the existing key's value
    mp1.emplace(4, 7);
    mp1.insert({3, 5}); // Map stores unique keys in a sorted order

    // Iterate over map
    cout << "Map:" << endl;
    for (auto it : mp1)
    {
        cout << "\t" << it.first << " " << it.second << endl;
    }

    // Accessing keys from map and getting the corresponding value
    cout << "Accessing keys and values from map:" << endl;
    cout << "\t1 ---> " << mp1[1] << endl;
    cout << "\t5 ---> " << mp1[5] << " // Key doesn't exist" << endl; // If key doesn't exist in map, then 0 is returned
    auto it1 = mp1.find(3);
    cout << "\t3 ---> " << (*it1).second << endl;
    auto it2 = mp1.find(8);
    cout << "\t8 ---> " << (*it2).second << " // Key doesn't exist" << endl;

    /* Functions like lower_bound(), upper_bound(), erase(), size(), empty(),
    swap(), etc., has similar functionality as other data structures */

    return 0;
}