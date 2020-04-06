#include <iostream>
using namespace std;
int Queue[1000], backInd = -1, frontInd = 0;
void push(int x)
{
    ++backInd;
    Queue[backInd] = x;
}
void pop()
{
    Queue[frontInd] = 0;
    ++frontInd;
}
int Front()
{
    return Queue[frontInd];
}
bool isEmpty()
{
    if (frontInd > backInd)
        return true;
    else
        return false;
}
int main()
{

    push(5);
    push(6);
    push(7);
    cout << Front() << endl; //Value should be 5

    pop();
    cout << Front() << endl; //Value should be 6
    pop();
    pop();
    cout << isEmpty();
    return 0;
}