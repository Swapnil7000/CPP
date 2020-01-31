// To print a message using a function
#include <iostream>
using namespace std;
void g(void)
{
    cout << "Good morning!!";
}
int main()
{
    string myName;
    cout << "Enter your name" << endl;
    getline(cin,myName);
    g();
    cout << myName;
    return 0;
}