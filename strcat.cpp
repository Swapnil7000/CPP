// To concatenate two strings
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s1[20],s2[20];
cout<<"Enter two strings:"<<endl;
gets(s1);
gets(s2);
cout<<s1<<endl;
cout<<s2<<endl;
strcat(s1,s2);//concatenate two strings
cout<<s1;

return 0;
}