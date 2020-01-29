// To modify pointer
#include<iostream>
using namespace std;
int main()
{
 string myLove="sakeena";
 string *ptr=&myLove;
 cout<<myLove<<endl;
 cout<<*ptr<<endl;
 *ptr="saku";
 cout<<myLove<<endl;
//  cout<<*ptr<<endl;
return 0;
}