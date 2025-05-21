#include <iostream>
using namespace std;

int main(){
    //Kondisi C++ dan Pernyataan If
    //Anda sudah tahu bahwa C++ mendukung kondisi logika umum dari matematika:
    //Dalam contoh di bawah ini, kami menguji dua nilai untuk mengetahui apakah 20 lebih besar dari 18. jika kondisinya adalah true, cetak beberapa teks:
    if (20 > 18){
        cout << "20 is greater than 18" << endl;
    }
    cout << "======================" << endl;

    //Kita juga dapat menguji variabel:
    int x = 20;
    int y = 18;
    if(x > y){
        cout << "x is grater than y" << endl;
    }
}