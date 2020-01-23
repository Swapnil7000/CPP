#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    switch (a)
    {
     case 1:cout<<"YOU HAVE ENTERED 1";
     break;
     case 2:cout<<"YOU HAVE ENTERED 2";
     break;
     case 3:cout<<"YOU HAVE ENTERED 3";
     break;
     default:cout<<"YOU HAVE ENTERED OTHER THAN 1,2,3 WHICH IS "<<a;
     break;
    }
    return 0;
}