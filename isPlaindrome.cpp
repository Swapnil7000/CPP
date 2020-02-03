// To check that the string is palindrome or not
#include <iostream>
using namespace std;
void isPlaindrome(string str, int l)
{
    int i;
    for (i = 0; i <= l / 2; i++)
    {
        if (str[i] != str[l - 1 - i])
        {
            cout << "String is not plaindrome";
            break;
        }
        else
        {
            if (i == l / 2)
            {
                cout << "String is plaindrome";
            }
        }
    }
}
int main()
{
    string str;
    int l;
    cout << "Enter the string:";
    getline(cin, str);
    l = str.length();
    isPlaindrome(str, l);
    return 0;
}