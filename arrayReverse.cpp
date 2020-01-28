// To print the reverse of an array
#include<iostream>
using namespace std;
int main()
{
 int n,i;
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 int arr[n];
 cout<<"Enter the values of array"<<endl;
 for(i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 cout<<"The reverse array elements are"<<endl;
  for(i=n-1;i>=0;i--)
 {
    cout<<arr[i]<<endl;
 }
return 0;
}