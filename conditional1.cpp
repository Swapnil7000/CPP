#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"You are less than 18 years old and your age is "<<age;
    }
    else if(age==18)
    {
        cout<<"You are 18 years old";
    }
    else
    {
        cout<<"You are greater than 18 years old and your age is "<< age ;
    }
    
    return 0;
}