// To predict use of pointers with arrays
#include <iostream>
using namespace std;
int main()
{
    int a[3] = {1, 2, 3};
    int *p = &a[2];
    ++p[0];
    cout << p[0]; //Will print the value at second index incremented by 1
    return 0;
}