//Program to print sum of array elements
#include<iostream>
using namespace std;
int main()
{
int i,n,arraySum=0;
cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the array elements"<<endl;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
   arraySum+=arr[i];
}
cout<<"Array sum is "<<arraySum;
return 0;
}