#include <iostream>
using namespace std;
class Student
{
    string s;
    int counter = 0;
    int c = 0;
    int RollNo[100];
    float cgpa[100];

public:
    void initStudent(void) { counter++; }
    void getRollNo(void);
    void getcgpa(void);
    void printdata(void);
};
void Student::getRollNo(void)
{
    cout << "Enter the roll number of student " << counter << endl;
    cin >> RollNo[counter];
}
void Student::getcgpa(void)
{
    cout << "Enter the cgpa of student " << counter << endl;
    cin >> cgpa[counter];
}
void Student::printdata(void)
{
    c++;
    for (int i = 0; i < c; i++)
    {
        cout << "Student " << counter << " RollNo. : " << RollNo[counter] << endl;
        cout << "Student " << counter << " cgpa. : " << cgpa[counter] << endl;
        c--;
    }
}
int main()
{
    Student ju;
    int n;
    cout << "Enter the number of students ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ju.initStudent();
        ju.getRollNo();
        ju.getcgpa();
        ju.printdata();
    }

    return 0;
}