// To swap two values by call by reference
#include <iostream>
using namespace std;
void swapFun(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;
    cout << "Before swapping a is " << a << " b is " << b << endl;
    swapFun(&a, &b);
    cout << "After swapping a is " << a << " b is " << b << endl;

    return 0;
}