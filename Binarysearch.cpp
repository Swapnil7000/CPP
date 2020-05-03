#include <iostream>
using namespace std;
int BinarySearch(int a[], int x, int n)
{
    int left = 1, right = n;
    int mid = left + (right - left) / 2; //Will not overflow
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
            return 1;
        else if (a[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
int main()
{
    int n, x, i;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    cout << BinarySearch(a, x, n);

    return 0;
}