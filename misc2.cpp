// To verify use of || and && operators
#include<iostream>
using namespace std;
int main()
{
int a=2,b=2;
int c= a||--b;
int d = a-- && --b;
cout<<a<<b<<c<<d<<endl;
return 0;
}