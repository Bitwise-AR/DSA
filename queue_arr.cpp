#include <iostream>
using namespace std;

int n = 50;
int queue[50];
int front = -1;
int rear = -1;

void push(int x)
{
    if (rear == n - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            queue[front] = x;
            rear++;
        }
        else
        {
            rear++;
            queue[rear] = x;
        }
    }
}

void pop()
{
    if (front == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Popped element: " << queue[front] << endl;
        front++;
    }
}

void print()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

bool isEmpty()
{
    if (front == -1 || front > rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    push(12);
    push(13);
    pop();
    push(14);
    push(15);
    push(16);
    print();
    isEmpty();
    return 0;
}