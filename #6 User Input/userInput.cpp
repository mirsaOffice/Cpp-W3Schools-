#include <iostream>
using namespace std;

int main() {
    //Masukan Pengguna C++
    //Anda telah mempelajari bahwa cout digunakan untuk mengeluarkan (mencetak) nilai. Sekarang kita akan menggunakan cin untuk mendapatkan masukan pengguna.
    //cin adalah variabel yang telah ditentukan sebelumnya yang membaca data dari keyboard dengan operator ekstraksi (>>).
    //Dalam contoh berikut, pengguna dapat memasukkan angka, yang disimpan dalam variabel x. Kemudian kita mencetak nilai dari x:
    int x;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x << endl;
    cout << "======================" << endl;

    //Membuat Kalkulator Sederhana
    //Dalam contoh ini, pengguna harus memasukkan dua angka. Kemudian kita cetak jumlahnya dengna menghitung (menjumlahkan) kedua angka tersebut:
    int y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
    cout << "======================" << endl;
}
