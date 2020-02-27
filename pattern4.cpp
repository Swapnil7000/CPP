/* To print pattern like this
   Enter the number of rows
5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5          */
#include <iostream>
using namespace std;
int main()
{
    int i, l, j, n;
    cout << "Enter the number of rows " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (l = 1; l <= n - i; l++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        
        
        cout << endl;
    }
    return 0;
}