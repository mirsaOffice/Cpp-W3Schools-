#include <iostream>
using namespace std;

int main(){
    //String Input Pengguna
    //Dimungkinkan untuk menggunakan operator ekstraksi >> untuk cin menyimpan string yang dimasukkan oleh pengguna:
    string firstName;
    cout << "Type your first name: ";
    getline (cin, firstName);
    cout << "Your name is: " << firstName << endl;
    cout << "======================" << endl;

    //Namun, cin menganggap spasi (whitespace, tab, dsb) sebagai karakter penutup, yang artinya hanya dapat menyimpan satu kata (bahkan jika Anda mengikuti banyak kata):
    
    //Dari contoh di atas, Anda mungkin berharap program akan mencetak "John Doe", tetapi yang dicetaknya hanya "John".
    //Itulah sebabnya, saat bekerja dengan string, kita sering menggunakan getline() fungsi untuk membaca sebaris teks. Fungsi ini mengembalikan cin parameter pertama, dan variabel string sebagai parameter kedua:
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName << endl;
    cout << "======================" << endl;
}