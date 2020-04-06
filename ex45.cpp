#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char input[1000];
int ind;
int Stack[1000];
void push(int x)
{
    Stack[++ind] = x;
}
bool isEmpty()
{
    if (ind > 0)
        return false;
    else
        return true;
}
bool ValidParenthesis(char input[])
{
    int i;
    int len = strlen(input);
    for (i = 0; i < len; i++)
    {
        if (input[i] == '(')
            push(1);
        if (input[i] == '[')
            push(2);
        if (input[i] == '{')
            push(3);
        if (input[i] == ')')
        {
            if (isEmpty() || Stack[ind] != 1) //If stack is empty or char is not '(' return false
                return false;
            else
            { //If stack is not empty or char is ')'then pop that element
                Stack[ind] = 0;
                --ind;
            }
        }
        if (input[i] == ']')
        {
            if (isEmpty() || Stack[ind] != 2)
                return false;
            else
            {
                Stack[ind] = 0;
                --ind;
            }
        }
        if (input[i] == '}')
        {
            if (isEmpty() || Stack[ind] != 3)
                return false;
            else
            {
                Stack[ind] = 0;
                --ind;
            }
        }
    }
    if (ind == 0)
        return true;
    else
        return false;
}
int main()
{
    cin >> input;
    cout << ValidParenthesis(input);
    return 0;
}