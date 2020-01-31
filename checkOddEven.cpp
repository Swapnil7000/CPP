// To check whether the number is odd or even
#include <iostream>
using namespace std;
void isOddEven(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
}
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    isOddEven(a);
    return 0;
}