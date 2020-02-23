// To print the pattern like this 
/*
Enter the number of rows:
5
      *
     * *
    * * *
   * * * *
  * * * * *   */
#include<iostream>
using namespace std;
int main()
{
int r,i,j,l;
cout<<"Enter the number of rows:"<<endl;
cin>>r;
for(i=0;i<r;i++)
{
    for(l=0;l<=r-i;l++)
    {
        cout<<" ";
    }
    for(j=0;j<=i;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}