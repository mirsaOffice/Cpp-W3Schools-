#include <iostream>
using namespace std;

int main(){
    //Operator C++
    //Operator digunakan untuk melakukan operasi pada variabel dan nilai. Dalam contoh di bawah ini, kami menggunakan + operator untuk menambahkan dua nilai:
    int x = 100 + 50;
    cout << x << endl;
    cout << "======================" << endl;

    //Meskipun + operator ini sering digunakan untuk menjumlahkan dua nilai, seperti pada contoh di atas, operator ini juga dapat digunakan untuk menjumlahkan sebuah variabel dan sebuah nilai, atau sebuah variabel dan variabel lainnya:
    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;
    cout << sum3 << endl;
    cout << "======================" << endl;

    int a = 2 + 3;
    cout << "2 + 3 = " << a << endl;
    cout << "======================" << endl;

    a = 3 - 2;
    cout << "3 - 2 = " << a << endl;
    cout << "======================" << endl;

    a = 2 * 3;
    cout << "2 * 3 = " << a << endl;
    cout << "======================" << endl;

    a = 4 / 2;
    cout << "4 / 2 = " << a << endl;
    cout << "======================" << endl;

    a = 6 % 2;
    cout << "6 % 2 = " << a << endl;
    cout << "======================" << endl;

    a = ++a;
    cout << "++a = " << a << endl;
    cout << "======================" << endl;

    a = --a;
    cout << "--a = " << a << endl;
    cout << "======================" << endl;
}
