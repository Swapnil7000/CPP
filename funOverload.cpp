//To learn about overloding of functions
#include<iostream>
#define PI 3.14
// Calculate volume of cylinder
double volume(double r, double h)
{
    return PI*r*r*h;
}
// Calculates the volume of rectangle
double volume(double l,double b,double h)
{
    return l*b*h;
}
// Calculates the volume of cube
double volume(double a)
{
    return a*a*a;
}
using namespace std;
int main()
{
cout<<"The volume of cylinder with radius 3 & height 5 is "<<volume(3,5)<<endl;
cout<<"The volume of cube with side 5.5 is "<<volume(5.5)<<endl;
cout<<"The volume of rectangle  with length 3,width 8 & height 5 is "<<volume(3,8,5)<<endl;
return 0;
}