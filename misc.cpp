// To guess the output of the program
// Output ,,Yes!!
#include <iostream>
using namespace std;
int main()
{
    char a = 44;
    char b = 300; //warning: overflow in conversion from 'int' to 'char' changes value from '300' to '','' [-Woverflow]
    cout << a;
    cout << b;
    if (a == b)
    {
        cout << "Yes!!";
    }
    else
    {
        cout << "No!!";
    }
    return 0;
}