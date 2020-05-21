#include <iostream>
using namespace std;
int main()
{
    string s;
    int sum = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{')
        {
            sum += 1;
        }
        else if (s[i] == '}')
        {
            sum -= 1;
        }
        else if (s[i] == '[')
        {
            sum += 2;
        }
        else if (s[i] == ']')
        {
            sum -= 2;
        }
        else if (s[i] == '(')
        {
            sum += 3;
        }
        else if (s[i] == ')')
        {
            sum -= 3;
        }
        else
        {
            continue;
        }
    }
    if (sum == 0)
    {
        cout << "Valid parenthesis";
    }
    else
    {
        cout << "Not valid";
    }

    return 0;
}