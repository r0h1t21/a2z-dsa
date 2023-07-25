#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    int a[] = {1, 5, 3, 7, 4, 2, 9};
    vector<int> v = {1, 5, 3, 7, 4, 2, 9};

    // Array Sorting
    cout << "Array: ";
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(a, a + 7);
    cout << "\tArray after sorting in ascending order: ";
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(a, a + 7, greater<int>());
    cout << "\tArray after sorting in descending order: ";
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(a, a + 4);
    cout << "\tArray after partial sorting: ";
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // Vector Sorting
    cout << "Vector: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "\tVector after sorting in ascending order: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>()); // greater() acts as comparator here
    cout << "\tVector after sorting in descending order: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    auto it = v.begin();
    advance(it, 4);
    sort(v.begin(), it);
    cout << "\tVector after partial sorting: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Custom Comparator
    pair<int, int> pair_arr[] = {{2, 3}, {5, 1}, {2, 5}, {9, 7}, {4, 6}};
    cout << "Pair Array: ";
    for (auto i : pair_arr)
    {
        cout << "{" << i.first << "," << i.second << "} ";
    }
    cout << endl;
    sort(pair_arr, pair_arr + 5, comp);
    cout << "\tPair array after sorting: "; /* Sorted according to increasing second element of the pairs,
    in case the second elements are same then according to decreasing first elements of the pairs */
    for (auto i : pair_arr)
    {
        cout << "{" << i.first << "," << i.second << "} ";
    }
    cout << endl;

    return 0;
}