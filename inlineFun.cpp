// To use inline functions to find product of two numbers
#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter the two numbers:" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b);
    return 0;
}
