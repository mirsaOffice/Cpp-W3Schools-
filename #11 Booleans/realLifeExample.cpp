#include <iostream>
using namespace std;

int main(){
    //Contoh Kehidupan Nyata
    //Mari kita pikirkan "contoh kehidupan nyata" di mana kita perlu mencari tahu apakah seseorang sudah cukup umur untuk memilih. Dalam contoh di bawah ini, kami menggunakan >= operator perbandingan untuk mengetahui apakah usia (25) lebih besar dari ATAU sama dengan batas usia pemilih, yang ditetapkan sebesar 18:
    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << endl;
    cout << "======================" << endl;

    //Keren, kan? Pendekatan yang lebih baik lagi (karena kita sedang bersemangat sekarang), adalah membungkus kode di atas dalam sebuah if...else pernyataan, sehingga kita dapat melakukan tindakan yang berbeda tergantung pada hasilnya:
    if(myAge >= votingAge){
        cout << "Old enough to vote!" << endl;
    } else {
        cout << "Not old enough to vote." << endl;
    }
    cout << "======================" << endl;
}