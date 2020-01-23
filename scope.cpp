#include<iostream>
using namespace std;
int a=45;
int main()
{
    int a=4;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<::a;//Scope resolution it will print value of global variable
    return 0;

}