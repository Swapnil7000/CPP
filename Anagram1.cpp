#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int n1 = s1.length();
    int n2 = s2.length();
    if (n1 != n2)
    {
        cout << "Not anagram";
    }
    else
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout << "Anagram";
        }
        else
        {
            cout << "Not Anagram";
        }
    }

    return 0;
}