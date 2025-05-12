#include <iostream>
using namespace std;

int main(){
    //Karakter Khusus
    //Karena string harus ditulis dalam tanda kutip, C++ akan salah memahami string ini, dan menghasilkan kesalahan:

    //Solusi untuk menghindari masalah ini, adalah dengan menggunakan karakter escape garis miring terbalik. Karakter escape garis miring terbalik (\) mengubah karakter khusus menjadi karakter string:
    string txt = "We are the so-called \"Viking\" from the north.";
    cout << txt << endl;
    cout << "======================" << endl;

    txt = "It\'s alright.";
    cout << txt << endl;
    cout << "======================" << endl;

    //Urutan ini \\ menyisipkan satu garis miring terbalik dalam sebuah  string:
    txt = "The character \\ is called backslash.";
    cout << txt << endl;
    cout << "======================" << endl;

    //Karakter escape populer lainnya dalam C++ adalah: (\n) (\t)
}