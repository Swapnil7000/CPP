#include <iostream>
using namespace std;
int main()
{
   int n,k;
   cout << "Enter the size of array" << endl;
   cin >> n;
   cout<<"Enter the value of k "<<endl;
   cin>>k;
   int arr[n], i, j, t;
   cout << "Enter the array elements" << endl;
   for (i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   for (i = 0; i < n - 1; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (arr[i] > arr[j])
         {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
         }
      }
   }
cout<<"Kth largest element is "<<arr[k-1];
return 0;
}