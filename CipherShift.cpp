// To predict the ciphershifted letter
#include <iostream>
using namespace std;
int main()
{
    char ch, CipherShift;
    int s; //s for the cipher shift
    cout << "Enter the character" << endl;
    cin >> ch;
    cout << "Enter the shift" << endl;
    cin >> s;
    if (isupper(ch))
    {
        CipherShift = char(int((ch + s - 65) % 26 + 65)); // (s+char)mod26 to have value of cipher character -65 to make it  a cipher
        cout << "The value shifted by " << s << " steps is " << CipherShift;
    }
    else
    {
        CipherShift = char(int((ch + s - 97) % 26 + 97));
        cout << "The value shifted by " << s << " steps is " << CipherShift;
    }

    return 0;
}