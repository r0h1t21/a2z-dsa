#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st; // LIFO

    // Push into stack
    st.push(5);
    st.push(1);
    st.push(7);
    st.emplace(3);

    // Check the top element in stack
    cout << "Element on top of the stack: " << st.top() << endl;
    st.top() += 2; // We can modify the value of top element in stack
    cout << "Element on top of the stack after modification: " << st.top() << endl;

    // Remove the top element in stack
    st.pop();
    cout << "Element on top of the stack after popping: " << st.top() << endl;

    // Check size of stack
    cout << "Size of stack: " << st.size() << endl;

    // Check if stack is empty
    cout << "Is stack empty?: ";
    if (st.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // Swap two stacks
    stack<int> st1;
    cout << "Before swapping stack 1 and stack 2:" << endl;
    cout << "\tSize of stack 1: " << st.size() << endl;
    cout << "\tSize of stack 2: " << st1.size() << endl;
    st1.swap(st);
    cout << "After swapping stack 1 and stack 2:" << endl;
    cout << "\tSize of stack 1: " << st.size() << endl;
    cout << "\tSize of stack 2: " << st1.size() << endl;

    return 0;
}