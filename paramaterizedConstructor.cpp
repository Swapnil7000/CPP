#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void printNumber(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
    Complex(int, int);
};
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex a(2, 4);
    a.printNumber();
    // Explicit call
    Complex b = Complex(34, 58);
    b.printNumber();
    return 0;
}