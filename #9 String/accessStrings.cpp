#include <iostream>
using namespace std;

int main(){
    //Akses String
    //Anda dapat mengakses karakter dalam string dengan merujuk ke nomor indeks di dalam tanda kurung siku []. Contoh ini mencetak karakter pertama dalam myString:
    string myString = "Hello";
    cout << myString[0] << endl;
    cout << "======================" << endl;

    //Contoh ini mencetak karakter kedua dalam myString:
    cout << myString[1] << endl;
    cout << "======================" << endl;

    //Untuk mencetak karakter terakhir dari sebuah string, Anda dapat menggunakan kode berikut:
    cout << myString[myString.length() - 1] << endl;
    cout << "======================" << endl;

    //Ubah Karakter String
    //Untuk mengubah nilai karakter tertentu dalam string, lihat nomor indeks, dan gunakan tanda kutip tunggal:
    myString[0] = 'J';
    cout << myString << endl;
    cout << "======================" << endl;

    //Fungsi at()
    //Perpustakaan ini <string> juga memiliki at() fungsi yang dapat digunakan untuk mengakses karakter dalam string:
    myString = "Hello";
    cout << myString << endl;
    cout << myString.at(0) << endl;
    cout << myString.at(1) << endl;
    cout << myString.at(myString.length() - 1) << endl;
    myString.at(0) = 'J';
    cout << myString << endl;
    cout << "======================" << endl;
}
