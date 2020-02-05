// To transpose the given matrix
#include <iostream>
using namespace std;
int main()
{
    int r1, c1, i, j;
    cout << "Enter the number of rows & coloumns" << endl;
    cin >> r1 >> c1;
    int trans[r1][c1];
    cout<<"Enter the matrix elements"<<endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> trans[i][j];
        }
    }
    cout << "Before transposing matrix looks like this" << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << trans[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "After transposing matrix looks like this" << endl;
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            cout << trans[j][i] << "\t";
        }
        cout << endl;
    }
    return 0;
}