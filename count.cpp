//Program to count vowels,digits,consonants,whitespaces
#include<iostream>
using namespace std;
int main()
{
string str;
int i;
int vowelCount=0,totalCount=0,digitCount=0,spacesCount=0;
cout<<"Enter the string:";
getline(cin,str);
for(i=0;i<str.length();i++)
{
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
    ++vowelCount;
  }
  if(str[i]>='0'&&str[i]<='9')
  {
      ++digitCount;
  }
  if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
  {
      ++totalCount;
  }
  if(str[i]==' ')
  {
      ++spacesCount;
  }
}
cout<<"Number of vowels in string are:"<<vowelCount<<endl;
cout<<"Number of consonants in string are:"<<totalCount-vowelCount<<endl;
cout<<"Number of digits in string are:"<<digitCount<<endl;
cout<<"Number of spaces in string are:"<<spacesCount<<endl;
return 0;
}