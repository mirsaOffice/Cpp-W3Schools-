#include <iostream>
using namespace std;

int main(){
    //Ekspresi Boolean mengambilkan nilai boolean, yang bisa berupa 1 (benar) atau 0 (salah). Ini berguna untuk membangun logika dan menemukan jawaban. Anda dapat menggunakan operator perbandingan, seperti operator lebih besari dari (>), untuk mengetahui apakah suatu ekspresi (atau variabel) benar atau salah:
    int x = 10;
    int y = 9;
    cout << (x > y) << endl;
    cout << "======================" << endl;

    //Atau bahkan lebih mudah:
    cout << (10 > 9) << endl;
    cout << "======================" << endl;

    //Pada contoh di bawah ini, kami menggunakan operator sama dengan (==) untuk mengevaluasi suatu ekspresi:
    cout << (x == 10) << endl;
    cout << "======================" << endl;
    
    cout << (10 == 15) << endl;
}
