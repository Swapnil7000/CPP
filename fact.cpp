// To calculate the factorial of a number using recursion
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {

        return n * fact(n - 1);
    }
}
int main()
{
    int f;
    cout << "Enter the number"<<endl;
    cin >> f;
    cout << "Factorial of " << f << " is " << fact(f);
    return 0;
}