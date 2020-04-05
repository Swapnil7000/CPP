#include <iostream>
using namespace std;
int Stack[100], ind;
void push(int x)
{
    ++ind;
    Stack[ind] = x;
}
void pop()
{
    Stack[ind] = 0;
    --ind;
}
int top()
{
    return ind;
}
bool isEmpty()
{
    if (ind >= 1)
        return false;
    else
        return true;
}

int main()
{
    push(1);
    push(2);
    if (!isEmpty())
        cout << top(); //Will print 2 as value as it is not empty
    pop();
    pop();
    if (!isEmpty())
        cout << top(); //Will not print anything as it is empty
    return 0;
}