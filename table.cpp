//To print table of entered number
#include<iostream>
using namespace std;
int main()
{ 
    int i=0,n;
    cout<<"Enter the number:";
    cin>>n;
    do
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    } 
    while (i<=10);
   
    return 0; 

}