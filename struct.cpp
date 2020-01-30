//To print data using structures
#include <iostream>
struct student
{
    int rollNumber;
    char favChar;
    float cgpa;
};

using namespace std;
int main()
{
    struct student swapnil;
    swapnil.rollNumber = 380;
    swapnil.favChar = 'S';
    swapnil.cgpa = 9.50;
    cout << "The roll number of swapnil is " << swapnil.rollNumber << endl;
    cout << "The favourite character of swapnil is " << swapnil.favChar << endl;
    cout << "The cgpa of swapnil is " << swapnil.cgpa << endl;

    return 0;
}