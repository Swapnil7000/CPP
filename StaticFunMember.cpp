// To define the use of static members and methods
#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; //Static variables

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee " << count << " is " << id << endl;
    }
    static void getCount(void) //Static functions
    {
        cout << "Count number is " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee swapnil, Aur, Aur1;
    swapnil.setData();
    swapnil.getData();
    swapnil.getCount();
    Aur.setData();
    Aur.getData();
    Aur.getCount();
    Aur1.setData();
    Aur1.getData();
    Aur1.getCount();
    return 0;
}