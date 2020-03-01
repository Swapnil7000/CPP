/*  To print the pattern like this
Enter the number of rows
5
              *
            **
          ***
        ****
      *****
        ****
          ***
            **
              *     */
#include <iostream>
using namespace std;
int main()
{
    int i, j, l, r;
    cout << "Enter the number of rows" << endl;
    cin >> r;

    for (i = 0; i < r; i++)
    {
        for (l = 0; l <= r + 1 - i; l++)
        {
            cout << "  ";
        }
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = r - 1; i > 0; i--)
    {
        for (l = r + 2 - i; l >= 0; l--)
        {
            cout << "  ";
        }
        for (j = i - 1; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}