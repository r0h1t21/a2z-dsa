#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, char> p1 = {3, 'd'};
    cout << "Pair 1: (" << p1.first << ", " << p1.second << ")" << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "Pair 2: (" << p2.first << ", " << p2.second.first << ", " << p2.second.second << ")" << endl;

    pair<int, int> p1_arr[] = {{2, 4}, {3, 9}, {4, 16}, {5, 25}};
    for (int i = 0; i < sizeof(p1_arr) / sizeof(p1_arr)[0]; i++)
    {
        if (i == 0)
            cout << "Array of Pairs 1: [(" << p1_arr[i].first << ", " << p1_arr[i].second << "), ";
        else if (i == (sizeof(p1_arr) / sizeof(p1_arr)[0]) - 1)
            cout << "(" << p1_arr[i].first << ", " << p1_arr[i].second << ")]";
        else
            cout << "(" << p1_arr[i].first << ", " << p1_arr[i].second << "), ";
    }

    return 0;
}