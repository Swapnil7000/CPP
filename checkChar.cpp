// To check whether the character is vowel or a consonant
#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter the character:"<<endl;
cin>>c;
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
    cout<<"Vowel";
}
else
{
    cout<<"Consonant";
}
return 0;
}