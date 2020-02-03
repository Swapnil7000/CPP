// To calculate fibonacci series term
// 1 1 2 3 5 8....... where index starts from zero
#include <iostream>
using namespace std;
int fib(int a)
{
    if (a < 2)
    {
        return 1;
    }
    else
    {
        return fib(a - 2) + fib(a - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the term to calculate in fibonacci series"<<endl;
    cin >> n;
    cout << "The " << n << " term of fibonacci series is " << fib(n);
    return 0;
}