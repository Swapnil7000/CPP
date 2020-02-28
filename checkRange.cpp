// To print the range of an array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size" << endl;
    cin >> n;
    int arr[n], i, min = arr[0], max = arr[0];
    cout<<"Enter the array elements"<<endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {

            min = arr[i];
        }
    }
    cout << "Range of the array is " << max - min;
    return 0;
}