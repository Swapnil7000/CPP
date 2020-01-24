//To print the odd numbers between 1 to n
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;

        }
        else
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}