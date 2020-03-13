#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void printComplex()
    {
        cout << "Your complex number is " << a <<" + "<< b<< "i"<<endl ;
    }
    Complex(void);//Constructor declaration
};
Complex::Complex(void)
{
    a = 10;
    b = 20;
}
int main()
{
    Complex c;
    c.printComplex();
    return 0;
}