// To calculate area of triangle
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float s, a, b, c, area;
    cout << "Enter three sides of triangle" << endl;
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of triangle is " << area;
    return 0;
}