#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4};
int* p=arr;
cout<<int(p)<<endl;//print the base address
cout<< *(p++)<<endl;//Post-increment of address but will print 1 as value
cout<<int(p)<<endl;//Now the address is increased by size of one array block i.e index becomes 1 now
 cout<<*p;//Now it will print 2 as value
return 0;
}