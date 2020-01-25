#include<iostream>
using namespace std;
int main()
{
 int i,n;
 cout<<"Enter the value of n:";
 cin>>n;
 int arr[n];
 cout<<"Enter the array elements:";
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 cout<<"Array elements are:"<<endl;
  for(i=0;i<n;i++)
 {
     cout<<arr[i]<<endl;
 }
 return 0;
}