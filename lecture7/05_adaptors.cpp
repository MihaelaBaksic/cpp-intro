#include <queue>
#include <stack>
#include <iostream>

using namespace std;


int main()
{

    // queue -> FIFO
    queue<int> q;
    q.push(1); // pushing to the queue
    q.push(10);
    q.push(-10);

    int top = q.front(); // getting the front value
    cout << "Queue top: " << top << endl;
    cout << "Queue top: " << q.front() << endl; // the same value is stil on top
    q.pop(); // removes the front top value;

    q.pop();
    q.pop(); 
    q.pop(); // removing from empty queue, valid
    cout << "Front of the empty queue: " << q.front() << endl;

    priority_queue<int> p;
    p.push(1); // pushing to the priority queue
    p.push(10);
    p.push(-10);

    cout << "Priority queue top value: " << p.top() << endl;


    stack<int> s;
    s.push(1);
    s.push(10);
    s.push(-10);
    cout << "Stack top value: " << s.top() << endl;   
}
