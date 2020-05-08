#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int i, sum1 = 0, sum2 = 0;
    for (i = 0; i < s1.length(); i++)
    {
        sum1 += int(s1[i]);
    }
    // cout<<sum1<<endl;
    for (i = 0; i < s2.length(); i++)
    {
        sum2 += int(s2[i]);
    }
    // cout<<sum2<<endl;
    if (sum1 == sum2 && s1.length() == s2.length())
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not anagram";
    }

    return 0;
}