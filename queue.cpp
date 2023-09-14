#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << "-";
        temp.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << "Size " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Rear element: " << q.back() << endl;
    q.pop();
    q.pop();
    cout << "Size: " << q.size() << endl;
    print(q);
    return 0;
}