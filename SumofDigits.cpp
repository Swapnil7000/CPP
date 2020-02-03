// To find sum of digits of a number
#include <iostream>
using namespace std;
int sumofDigits(int a)
{
    int i, r, sum = 0;
    while (a != 0)
    {

        r = a % 10;
        sum += r;
        a /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Sum of digits is " << sumofDigits(n);
    return 0;
}