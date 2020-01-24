#include<iostream>
using namespace std;
int main()
{
int a=45;
int* b=&a;
int** c=&b;//Pointer to a pointer
cout<<"The address of a is: "<<b<<endl;
cout<<"The adresss of b is: "<<c<<endl;
cout<<"The value of b is: "<<*c<<endl;
cout<<"The value of a is: "<<**c<<endl;
return 0;
}