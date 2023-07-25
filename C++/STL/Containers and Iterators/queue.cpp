#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q; // FIFO

    // Push into queue
    q.push(4);
    q.push(2);
    q.push(9);
    q.emplace(6);

    // Check the first and last element in the queue
    cout << "Last element in the queue: " << q.back() << endl;
    q.back() += 2; // We can modify the value of last element in the queue
    cout << "Last element in the queue after modification: " << q.back() << endl;
    cout << "First element in the queue: " << q.front() << endl;
    q.front() += 3; // We can modify the value of first element in the queue
    cout << "First element in the queue after modification: " << q.front() << endl;

    // Remove the first element in queue
    q.pop();
    cout << "First element in the queue after popping: " << q.front() << endl;

    // Check size of queue
    cout << "Size of queue: " << q.size() << endl;

    // Check if queue is empty
    cout << "Is queue empty?: ";
    if (q.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}