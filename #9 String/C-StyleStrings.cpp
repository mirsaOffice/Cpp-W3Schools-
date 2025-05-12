#include <iostream>
#include <string>
using namespace std;

int main(){
    //Senar Gaya C
    //String gaya C dibuat dengna char tipe, buka string. Nama tersebut berasal dari bahasa C, yang tidak seperti banyak bahasa pemrograman lainnya, tidak memiliki string tipe untuk membuat variabel string dengan mudah. Sebagai gantinya, Anda harus menggunakan char tipe tersebut dan membuat array karakter untuk membuat "string" dalam C.
    //Karakter C++ dikembangkan sebagai perluas dari C, C++ terus mendukung cara pembuatan string ini dalam C++:
    string greeting1 = "Hello";
    char greeting2[] = "Hello";
    cout << greeting1 << endl;
    cout << greeting2 << endl;
    cout << "======================" << endl;

    //Catatan : Lebih mudah untuk bekerja dengan string tipe standar, daripada string gaya C. Namun, salah satu alasan beberapa pengguna terus menggunakan string gaya C adalah karena mereka memiliki akses ke fungsi dari pustaka standar C.
}