#include <iostream>
using namespace std;

int main() {
    //Mendeklarasikan Banyak Variabel
    //Untuk mendeklarasikan lebih dari satu variabel dengan tipe yang sama, gunakan daftar yang dipisahkan dengan koma :
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;
    cout << "======================" << endl;

    //Satu Nilai ke Beberapa Variabel
    //Anda juga dapat menetapkan nilai yang sama ke beberapa variabel dalam satu baris :
    int a, b, c;
    a = b = c = 50;
    cout << a + b + c << endl;
    cout << "======================" << endl;
}