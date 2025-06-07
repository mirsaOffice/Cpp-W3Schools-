#include <iostream>
using namespace std;

int main(){
    //Break C++
    //Anda telah melihat break pernyataan yang digunakan dalam bab sebelumnya dari tutorial ini. Pernyataan itu digunakan untuk "Melompat keluar" dari sebuah switch pernyataan. Pernyataan tersebut break juga dapat digunakan untuk keluar dari suatu masalah. Contoh ini keluar dari loop ketika i sama dengan 4:
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Continue C++
    //Pernyataan tersebut continue menghentikan satu iterasi (dalam perulangan) jika kondisi tertentu terjadi, dan berlanjut pada iterasi berikutnya dalam perulangan. Contoh ini melewatkan nilai 4:
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << endl;
    }
    cout << "======================" << endl;
    
    //Break dan Continue dalam While Loop
    //Anda juga dapat menggunakan bereak dan continue dalam loop while:
    int j = 0;
    while (j < 10)
    {
        cout << j << endl;
        j++;
        if (j == 4)
        {
            break;
        }
    }
    cout << "======================" << endl;

    
    
}
