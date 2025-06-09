#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Hilangkan Ukuran Array
    //Dalam C++, Anda tidak perlu menentukan ukuran array. Kompiler cukup pintar untuk menentukan ukuran array berdasarkan jumlah nilai yang dimasukkan:
    string cars[] = {"Volvo", "BMW", "Ford"};

    //Hilangkan Elemen pada Deklarasi
    //Dimungkinkan juga untuk mendeklarasikan array tanpa menentukan elemen saat deklarasi, dan menambahkannya kemudian:
    string car[5];
    car[0] = "Volvo";
    car[1] = "BMW";
    car[2] = "Ford";
    car[3] = "Mazda";
    car[4] = "Tesla";
    for (int i = 0; i < 5; i++)
    {
        cout << car[i] << endl;
    }
    //Contoh di atas hanya berfungsi ketika Anda telah menentukan ukuran array.
    cout << "======================" << endl;

    //Ukuran Tetap (Array) vs. Ukuran Dinamis (Vektor)
    //Anda akan sering mendengarkan istilah "ukuran tetap" dan "ukuran dinamis" saat membahas array di C++. Hal ini karena ukuran array dalam C++ bersifat tetap, artinya Anda tidak dapat menambahkan atau menghapus elemen setelah dibuat.
    
    //Vektor
    //UNtuk operasi yang memerlukan penambahan dan penghapusan elemen array, C++ menyediakan vektor, yang merupakan array yang dapat diubah ukurannya. Ukurannya vektor bersifat dinamis, artinya dapat tumbuh dan menyusut sesuai kebutuhan. Vektor ditemukan di <vector> perpustakaan, dan dilengkapi dengan banyak fungsi berguna untuk menambah, menghapsu, dan memodifikasi elemen:
    vector<string> cars2 = {"Volvo", "BMW", "Ford"};

    cars2.push_back("Tesla");
    for (string car : cars2){
        cout << car << endl;
    }
    cout << "======================" << endl;
}