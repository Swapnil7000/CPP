#include <iostream>
using namespace std;
class Animal
{
public:
    string a;
    string b;
    float f;
    void getData()
    {
        cout << "Animal name: " << a << endl;
        cout << "Animal voice: " << b << endl;
        cout << "Animal speed: " << f << endl;
    }
};
int main()
{
    Animal dog;
    dog.a="Tommy";
    dog.b="Bark!!";
    dog.f=20.54;
    dog.getData();
    return 0;
}