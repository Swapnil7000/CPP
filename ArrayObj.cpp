//Arrays of objects
#include <iostream>
using namespace std;
class Student
{
    int RollNo;
    float cgpa;

public:
    void setData(void)
    {
        cout << "Enter your RollNo. and cgpa " << endl;
        cin >> RollNo;
        cin >> cgpa;
    }
    void getData(void)
    {
        cout << "Student roll number is " << RollNo << " and cgpa is " << cgpa<<endl;
    }
};
int main()
{
    Student ju[100];
    for (int i = 0; i < 100; i++)
    {
        ju[i].setData();
        ju[i].getData();
    }
    return 0;
}