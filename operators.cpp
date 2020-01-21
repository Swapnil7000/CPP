
#include<iostream>
using namespace std;
int main()
{
    int a=4,b=3;
    // Arithmetic operations
    cout<<"Addition is"<<a+b<<endl;
    cout<<"Subtraction is "<<a-b<<endl;
    cout<<"Multiplication is "<<a*b<<endl;
    cout<<"Division is "<<a/b<<endl;
    cout<<"Remainder is "<<a%b<<endl;
    cout<<"Value of a++ is "<<a++<<endl;
    cout<<"Value of ++a is "<<++a<<endl;
    // Comparison operators
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<" The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    // Logical operators
    cout<<"The value of (a==b)&&(a!=b) is "<<((a==b)&&(a!=b))<<endl;
    cout<<"The value of (a==b)||(a!=b) is "<<((a==b)||(a!=b))<<endl;
    cout<<"The value of !(a==b) is "<<(!(a==b))<<endl;
    return 0;


}