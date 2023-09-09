#include <bits/stdc++.h>

using namespace std;

/*
    Solution for the problem: https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382
    Time Complexity = O(n)
    Space Complexity = O(n)
*/

vector<int> getFrequencies(vector<int> &v)
{
    vector<int> high_low(2, 0);
    int min = 1000000001, max = 0;
    map<int, int> frequencies;
    for (auto i : v)
        frequencies[i]++;
    for (auto i : frequencies)
    {
        if (i.second >= max)
            max = i.second;
        if (i.second <= min)
            min = i.second;
    }
    for (auto i : frequencies)
    {
        if (i.second == max && (high_low[0] == 0 || high_low[0] > i.first))
            high_low[0] = i.first;
        if (i.second == min && (high_low[1] == 0 || high_low[1] > i.first))
            high_low[1] = i.first;
    }

    return high_low;
}

int main()
{
    int n, buffer;
    vector<int> v, high_low;
    cout << "Enter the size of input array (2 <= size <= 10^4): " << endl;
    cin >> n;
    cout << "Enter the values for the array (1 <= value <= 10^9): " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        if (buffer <= 1000000000 && buffer >= 1)
            v.push_back(buffer);
    }
    high_low = getFrequencies(v);
    cout << "Element with highest frequency: " << high_low[0] << endl;
    cout << "Element with lowest frequency: " << high_low[1];

    return 0;
}