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
    cout << "You scored total " << total << " marks"<<endl;
    cout<<"Your grade is ";
     if(total>=90 && total<=100)
        {
            cout<<"A+";
        }
        else if(total>=80 && total<90)
        {
            cout<<"A";
        }
        else if(total>=70 && total<80)
        {
            cout<<"B";
        }
        else if(total>=60 && total<70)
        {
            cout<<"C";
        }
        else if(total<60 && total>=50)
        {
            cout<<"D";
        }
        else if(total>=35 && total<50)
        {
            cout<<"E";
        }
        else
        {
            cout<<"F";
        }
       

    return 0;
}