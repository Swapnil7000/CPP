// Use of comma operators
#include <iostream>
using namespace std;
int main()
{
    int a = (1, 2, 3, 4, 5); //a will assigned will be rightmost value
    cout << "Value of a is " << a;
    return 0;
}