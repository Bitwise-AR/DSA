#include <iostream>
using namespace std;
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int i, j, temp;
    int a[] = {2,5,3,7,6,14,17,12,11,16,13};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Before sorting - \n";
    print(a, n);
    bubble(a, n);
    cout << "\nAfter sorting - \n";
    print(a, n);
    return 0;
}
