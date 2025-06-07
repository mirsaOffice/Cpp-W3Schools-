#include <iostream>
using namespace std;

int main(){
    //Perulangan C++ For
    //Bila Anda tahu persis berapa kali Anda ingin mengulang suatu blok kode, gunakan for loop alih-alih while loop:
    for(int i = 0; i < 5; i++){
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Cetak Angka Genap
    //Contoh ini mencetak nilai genap antara 0 dan 10:
    for(int i = 0; i <= 10; i = i + 2){
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Jumlah Angka
    //Contoh ini menghitung jumlah angka dari 1 hingga 5:
    int sum = 0;
    for(int i = 1; i <= 5; i++){
        sum = sum + i;
    }
    cout << "Sum is " << sum << endl;
    cout << "======================" << endl;

    //Hitung Mundur
    //Contoh ini mencetak hitung mundur dari 5 hingga 1:
    for(int i = 5; i > 0; i--){
        cout << i << endl;
    }
    cout << "======================" << endl;
}
