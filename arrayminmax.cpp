//To find min and max of array
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n],min,max;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
        for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
cout<<"The maximum value element is "<<max<<endl;
cout<<"The minimum value element is "<<min<<endl;

return 0;
}