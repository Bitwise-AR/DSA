#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q1)
{
    queue<int> temp = q1;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
}
int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    // cout << "Size " << q1.size() << endl;
    // cout << "Front element: " << q1.front() << endl;
    // cout << "Rear element: " << q1.back() << endl;
    // q1.pop();
    // q1.pop();
    // cout << "Size: " << q1.size() << endl;
    cout << "Queue 1: ";
    print(q1);
    cout << endl;

    queue<int> q2;
    q2.push(1);
    q2.push(2);
    q2.push(3);
    q2.push(4);
    q2.push(5);
    // q1.swap(q2);
    cout << "Queue 2: ";
    print(q2);
    return 0;
}