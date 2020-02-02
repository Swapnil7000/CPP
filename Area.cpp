// To calculate area of circle
#include <iostream>
#define PI 3.14
using namespace std;
inline float areaCircle(float a)
{
    return PI * a * a;
}
int main()
{
    float r;
    cout << "Enter the radius of circle" << endl;
    cin >> r;
    cout << "Area of circle is " << areaCircle(r);
    return 0;
}