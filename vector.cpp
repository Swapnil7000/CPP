#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> A = {2, 34, 45, -12};
    cout << A[3] << endl;
    // sorting of vector using stl
    sort(A.begin(), A.end());
    vector<int>::iterator it;
    // for (it = A.begin(); it != A.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int &x : A) //by referencing
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
    A.push_back(123);
    cout << A[4] << endl;

    bool present = binary_search(A.begin(), A.end(), 123); //True
    cout << present << endl;

    present = binary_search(A.begin(), A.end(), 1); //False
    cout << present;
    return 0;
}