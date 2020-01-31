// To print a message using a function
#include <iostream>
void g(void)
{
    std::cout << "Good morning!!";
}
using namespace std;
int main()
{
    string myName;
    cout << "Enter your name" << endl;
    cin >> myName;
    g();
    cout << myName;
    return 0;
}