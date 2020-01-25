//To print array elements using do-while loop
#include<iostream>
using namespace std;
int main()
{
int i=0,n;
cout<<"Enter the value of n:";
cin>>n;
int arr[n];
cout<<"Enter the array elements:"<<endl;
do
{
    cin>>arr[i];
    i++;
}
while(i<n);
i=0;//As i value changes 
cout<<"Array elements are:"<<endl;
do
{
    cout<<arr[i]<<endl;
    i++;
}
while(i<n);
return 0;
}