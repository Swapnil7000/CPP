// Nesting of member functions in c++
#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chck_bin(void);
    void ones_compli(void);
    void display(void);
};
void binary::chck_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format";
            exit(0);
        }
    }
}
void binary::ones_compli(void)
{
    cout << "One's compliment of binary number is" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::read(void)
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.chck_bin();
    b.display();
    b.ones_compli();
    b.display();
    return 0;
}