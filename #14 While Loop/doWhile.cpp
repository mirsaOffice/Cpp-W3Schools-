#include <iostream>
using namespace std;

int main(){
    //Perulangan Do/While
    //Loop do/while merupakan variandari while loop. Loop ini akan mengeksekusi blok kode satu kali, sebelum memeriksa apakah kondisinya benar. Kemudian loop akan diulang selama kondisinya benar.
    //Contoh Do/While
    //Contoh di bawah ini menggunakan do/while loop. Loop akan selalu dijalankan setidaknya satu kali, bahkan jika kondisinya salah, karena blok kode dijalankan sebelum kondisinya diuji.
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 5);
    cout << "======================" << endl;

    //Kondisi Salah dari Awal
    //Bahkan jika kondisinya salah sejak awal, blok kode akan tetap dijalankan satu kali:
    i = 10;
    do
    {
        cout << "i is " << i << endl;
    } while (i < 5);
    cout << "======================" << endl;

    //Contoh Praktis: Masukan Pengguna
    //Contoh ini terus meminta pengguna untuk memasukkan angka positif. Perulangan berhenti saat pengguna memasukkan 0 atau angka negatif:
    int number;
    do
    {
        cout << "Enter a positive numebr: ";
        cin >> number;
    } while (number > 0);
    cout << "======================" << endl;
}
