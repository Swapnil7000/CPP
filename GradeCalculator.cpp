// To calculate grades of ju student
#include <iostream>
using namespace std;
int main()
{
    double insem1, insem2, endsem, assignment, attendance, total;
    cout << "Enter the value of insem1,insem2,endsem,assignment,attendance marks respectively" << endl;
    cin >> insem1 >> insem2 >> endsem >> assignment >> attendance;
    total = (0.3 * insem1) + (0.3 * insem2) + (0.5 * endsem) + (assignment) + (attendance);
    if (total >= 35)
    {
        cout << "You crossed the danger zone by " << (total - 35) << " marks" << endl;
    }
    else
    {
        cout << "You missed the exam by " << (35 - total) << endl;
    }
    cout << "You scored total " << total << " marks";

    return 0;
}