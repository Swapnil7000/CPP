#include <iostream>
#include <math.h>
using namespace std;
class Distance
{
public:
    int a, b;
    friend float Distance(Distance o1, Distance o2);
    void setPoint(int x, int y)
    {
        a = x;
        b = y;
    }
};
float DistanceCalc(Distance o1, Distance o2)
{
    return sqrt(((o2.a - o1.a) * (o2.a - o1.a)) + ((o2.b - o1.b) * (o2.b - o1.b)));
}
int main()
{
    Distance o1, o2;
    float distance;
    o1.setPoint(10, 20);
    o2.setPoint(20, 30);
    distance = DistanceCalc(o1, o2);
    cout << "The distance between (" << o1.a << "," << o1.b << ")"
         << "and "
         << "(" << o2.a << "," << o2.b << ")"
         << " is " << distance << endl;
    return 0;
}