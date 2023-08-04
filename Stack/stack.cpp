#include <iostream>
using namespace std;

int array[10]{};
int *top{array};

void push(int x)
{
    *top = x;
    top++;
}

void pop()
{
    *(--top) = 0;
}

int main()
{
    push(8);
    push(9);
    cout << array[0] << " " << array[1] << "\n";
    pop();
    cout << array[0] << " " << array[1] << "\n";
    return 0;
}