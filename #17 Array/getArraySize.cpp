#include <iostream>
using namespace std;

int main(){
    //Mendapatkan Ukuran Array
    //Untuk mendapat ukuran Array, Anda dapat menggunakan sizeof() operator:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers) << endl;
    cout << "======================" << endl;

    //Hal ini karena sizeof() operator mengambilkan ukuran tipe dalam byte. Anda belajar dari bab Tipe Data bahwa suatu int tipe biasanya 4 byte, jadi dari contoh di atas, 4 x 5 (4 byte x 5 elemen) = 20 byte.
    //Untuk mengetahui berapa banyak elemen yang dimiliki suatu array, Anda harus membagi ukuran array dengan ukuran elemen pertama dalam array:
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength << endl;
    cout << "======================" << endl;

    //Melakukan Looping Melalui Array dengan Sizeof()
    //Dalam bab array dan loop, kita menuliskan ukuran array dalam kondisi loop(i < 5). Ini tidak idela, karena hanya akan berfungsi untuk array dengan ukuran tertentu. Namun, dengan menggunakan sizeof() pendekatan dari contoh di atas, kita sekarang dapat membuat loop yang berfungsi untuk array dengan ukuran apa pun, yang lebih berkelanjutan. Alih-alih menulis:
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << endl;
    }
    cout << "======================" << endl;

    //Lebih baik menulis:
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)
    {
        cout << myNumbers[i] << endl;
    }
    cout << "======================" << endl;
}