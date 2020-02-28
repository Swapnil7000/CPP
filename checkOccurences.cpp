// To check occurences of a given number in an array
#include <iostream>
using namespace std;
int main()
{
    int n, key_num;
    cout << "Enter the array size " << endl;
    cin >> n;
    int arr[n], i, count = 0;
    cout << "Enter the array elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number whose occurences you have to find" << endl;
    cin >> key_num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key_num)
        {
            count++;
        }
    }
    cout << key_num << " occurs " << count << " times in the array";
    return 0;
}