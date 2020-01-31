//Function to find sum of two variables
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter second number"<<endl;
cin>>num2;
cout<<"Sum of two numbers is "<<sum(num1,num2);
return 0;
}