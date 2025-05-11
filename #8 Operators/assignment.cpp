#include <iostream>
using namespace std;

int main() {
    //Operator Penugasan
    //Operator penugasan digunakan untuk menetapkan nilai ke variabel. Dalam contoh di bawah ini, kita menggunakan operator penugasan (=) untuk menetapkan nilai 10 ke variabel yang disebut x:
    int x = 10;
    cout << x << endl;
    cout << "======================" << endl;

    //Operator penugasan penambahan (+=) menambahkan nilai ke variabel:

    x = 10;
    x += 5;
    cout << x << endl;
    cout << "======================" << endl;

    x -= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x *= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x /= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x %= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x = 10;
    x &= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x = 10;
    x |= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x = 10;
    x ^= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x = 10;
    x >>= 5;
    cout << x << endl;
    cout << "======================" << endl;

    x = 10;
    x <<= 5;
    cout << x << endl;
    cout << "======================" << endl;
}