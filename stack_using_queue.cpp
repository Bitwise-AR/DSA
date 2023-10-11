#include <iostream>
#include <string>
#include <queue>
using namespace std;

class stack
{
    queue<int> q1, q2;

    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q2 = q1;
        q1 = temp;
    }
};
int main()
{
    
    return 0;
}