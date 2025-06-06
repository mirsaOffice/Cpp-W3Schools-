#include <iostream>
using namespace std;

int main(){
    //Perulangan C++
    //Perulangan dapat mengeksekusi suatu blok kode selama suatu kondisi tertentu tercapai. Perulangan berguna karena menghemat waktu, mengurangi kesalahan, dan membuat kode lebih mudah dibaca.
    
    //Perulangan While dalam C++
    //Perulangan while akan mengulangi blok kode selama kondisi yang ditentukan terpenuhi true:
    //Dalam contoh di bawah, kode dalam loop akan berjalan, berulang-ulang, selama variabel(i) kurang dari 5:
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        i++;
    }
    cout << "======================" << endl;

    //Contoh Hitung Mundur
    //Contoh ini menghitung mundur dari 3 hingga 1 dan kemudian menampilkan "Selamat Tahun Baru!!" di bagian akhir:
    int countdown = 3;
    while (countdown > 0)
    {
        cout << countdown << endl;
        countdown--;
    }
    cout << "Happy New Year!!" << endl;
    
    
}