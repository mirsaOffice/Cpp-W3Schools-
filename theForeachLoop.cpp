#include <iostream>
using namespace std;

int main(){
    //Perulangan Foreach
    //Ada juga "Perulangan for-each" (juga dikenal sebagai perulangan for berbasis rentang), yang digunakan untuk melakukan perulangan melalui elemen-elemen dalam array(atau struktur data lainnya):
    //Contoh berikut ini mengeluarkan semua elemen dalam sebuah array, menggunakan "perulangan for-each":
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers){
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Loop Melalui String
    //Anda juga dapat menggunakan perulangan for-each untuk mengulang karakter dalam string:
    string word = "Hello";
    for (char c : word){
        cout << c << endl;
    }
}