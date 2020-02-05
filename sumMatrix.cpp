// To print sum of two matrix
#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2, i, j;
    cout << "Enter the rows & coloumns of first matrix" << endl;
    cin >> r1 >> c1;
    cout << "Enter the rows & coloumns of second matrix" << endl;
    cin >> r2 >> c2;
    int a[r1][c1], b[r2][c2], c[r2][c2];
    cout << "Enter the matrix 1 elements" << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the matrix 2 elements" << endl;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    if (c1 == c2 && r1 == r2)
    {
        cout << "Matrix sum is" << endl;

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix cannot be added";
    }

    return 0;
}