#include <iostream>
using namespace std;

int n = 50;
int stack[50];
int top = -1;

void push(int x)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow..." << endl;
        return;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow..." << endl;
    }
    else
    {
        cout << "Poped element is: " << stack[top] << endl;
        top--;
    }
}

bool empty()
{
    if (top >= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void print()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    // while(top>=0) {
    // cout<<stack[top]<<endl;
    // top--;
    // }
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl; 
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
    print();
    cout << empty();
    return 0;
}