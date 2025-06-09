#include <iostream>
using namespace std;

int main(){
    //Array C++
    //Array digunakan untuk menyimpan beberapa nilai dalam satu variabel, alih-alih mendeklarasikan variabel terpisah untuk setiap nilai. Untuk mendeklarasikan array, tentukan tipe variabel, tentukan nama array diikuti tanda kurung siku dan tentukan jumlah elemen yang harus disimpan:
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    //Mengakses Elemen Array
    //Anda mengakses elemen array dengan merujuk ke nomor indeks di dalam tanda kurung siku []. Pernyataan ini mengakses nilai elemen pertama dalam mobil:
    cout << cars[0] << endl;
    cout << "======================" << endl;

    //Mengubah Elemen Array
    //Untuk mengubah nilai elemen tertentu, lihat nomor indeks:
    cars[0] = "Opel";
    cout << cars[0] << endl;
    cout << "======================" << endl;
}
