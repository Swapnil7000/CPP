// To subtract without using - sign
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two number" << endl;
    cin >> num1;
    cin >> num2;
    if (num2 < num1)
    {
        while (num2 != 0)
        {
            --num2;
            --num1;
        }
        cout << "Subraction of two numbers is " << num1;
    }
    if (num2 > num1)
    {
        while (num2 != 0)
        {
            --num2;
            --num1;
        }
        cout << "Subraction of two numbers is " << num1;
    }

    return 0;
}