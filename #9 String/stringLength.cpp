#include <iostream>
using namespace std;

int main(){
    //Panjang Tali
    //Untuk mendapatkan panjang string, gunakan length() fungsi:
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "======================" << endl;

    //Anda mungkin melihat beberapa program C++ yang menggunakan size() fungsi ini untuk mendapatkan panjang string. Ini hanyalah alias dari length(). Terserah Anda jika ingin menggunakan length() atau size():
    cout << "The length of the txt string is: " << txt.size() << endl;
    cout << "======================" << endl;
}