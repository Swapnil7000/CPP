// To print the pattern like this
/*  ****
    ****
    ****
    ****    */
#include <iostream>
void  printsquare(int);
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    printsquare(n);
    return 0;
}
void  printsquare(int s)
{
    int i, j;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j <s; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}