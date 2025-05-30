#include <iostream>
using namespace std;

int main(){
    //Pernyataan Switch C++
    //Gunakan switch pernyataan untuk memilih satu dari banyak blok kode yang akan dieksekusi.
    //Contoh berikut menggunakan nomor hari dalam seminggu untuk menghitung nama hari dalam seminggu:
    int day = 4;
    switch (day)
    {
    case 1:
    cout << "Monday" << endl;
    break;
    case 2:
    cout << "Tuesday" << endl;
    break;
    case 3:
    cout << "Wednesday" << endl;
    break;
    case 4:
    cout << "Thursday" << endl;
    break;
    case 5:
    cout << "Friday" << endl;
    break;
    case 6:
    cout << "Saturday" << endl;
    break;
    case 7:
    cout << "Sunday" << endl;
    break;

    default:
        break;
    }
    cout << "======================" << endl;

    //Kata Kunci Default
    //Kata kunci tersebut default menentukan beberapa kode untuk dijalankan jika tidak ada kecocokan huruf besar/kecil:
    switch(day){
        case 6:
        cout << "Today is Saturday" << endl;
        break;
        case 7:
        cout << "Today is Sunday" << endl;
        break;
        default:
        cout << "Looking forward to the Weekend" << endl;
    }
}
