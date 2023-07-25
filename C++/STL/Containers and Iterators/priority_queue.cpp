#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Max Heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(8);
    pq.push(3);
    pq.emplace(10);
    cout << "Max Heap: " << endl;
    cout << "\tElement on top of the priority queue: " << pq.top() << endl;
    pq.pop();
    cout << "\tElement on top of the priority queue after popping: " << pq.top() << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(8);
    pq1.push(3);
    pq1.emplace(10);
    cout << "Max Heap: " << endl;
    cout << "\tElement on top of the priority queue: " << pq1.top() << endl;
    pq1.pop();
    cout << "\tElement on top of the priority queue after popping: " << pq1.top() << endl;

    return 0;
}