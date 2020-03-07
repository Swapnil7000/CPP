#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setComplex(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex SumComplex(Complex o1, Complex o2);
    void printComplex()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex SumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setComplex((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex o1, o2, sum;
    o1.setComplex(5, 4);
    o1.printComplex();
    o2.setComplex(2, 9);
    o2.printComplex();
    sum = SumComplex(o1, o2);
    sum.printComplex();
    return 0;
}