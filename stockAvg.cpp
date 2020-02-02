// To calculate the average of stocks,quantity of stocks,total share prize,profit-loss calculation as well on daily basis
#include <iostream>
using namespace std;
void stockAvg(float a[], int b[], int n)
{
    int i, qty = 0;
    float avg = 0, sharePrize;
    cout << "Enter the stock prize and quantity respectively" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        avg += a[i] * b[i];
    }
    for (i = 0; i < n; i++)
    {
        qty += b[i];
    }
    cout << "Total Share prize is  " << avg << endl;
    avg /= qty;
    cout << "Average of stocks is " << float(avg) << endl;
    cout << "Quantity of stocks is " << qty << endl;
    cout << "For profit loss calculation enter current share prize" << endl;
    cin >> sharePrize;
    if (sharePrize > avg)
    {
        cout << "Profit of " << (sharePrize - avg) * qty << " rupees";
    }
    else if (sharePrize == avg)
    {
        cout << "Neither profit nor loss ";
    }
    else
    {
        cout << "Loss of " << (avg - sharePrize) * qty << " rupees";
    }
}
int main()
{
    int n;
    cout << "Enter the number of enteries" << endl;
    cin >> n;
    float stockPrize[n];
    int stockQty[n];
    stockAvg(stockPrize, stockQty, n);
    return 0;
}