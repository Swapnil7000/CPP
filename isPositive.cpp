// To check whether the number is positive,zero,negative
#include <iostream>
using namespace std;
void isPositive(int a)
{
    if (a > 0)
    {
        cout << "Number is positive ";
    }
    else if (a == 0)
    {
        cout << "Number is zero";
    }
    else
    {
        cout << "Number is negative";
    }
}
int main()
{
    int x;
    cout << "Enter the number" << endl;
    cin >> x;
    isPositive(x);
    return 0;
}