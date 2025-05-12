#include <iostream>
#include <string>
using namespace std;

int main() {
    //Penggabungan String
    //Operator ini + dapat digunakan di antara string untuk menambahkannya bersama-sama guna membuat string baru. Ini disebut penggabungan: 
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << endl;
    cout << "======================" << endl;

    //Dalam contoh di atas, kami menambahkan spasi setelah firstName untuk membuat spasi antara John dan Doe pada output. Namun, Anda juga dapat menambahkan spasi dengan tanda kutip (" " atau ' '):
    string firstName2 = "John";
    fullName = firstName2 + " " + lastName;
    cout << fullName << endl;
    cout << "======================" << endl;

    //Menambahkan
    //String dalam C++ sebenarnya adalah sebuah objek, yang berisi fungsi-fungsi yang dapat melakukan operasi-operasi tertentu pada string. Misalnya, Anda juga dapat menggabungkan string dengan append() fungsi:
    fullName = firstName.append(lastName);
    cout << fullName << endl;
    cout << "======================" << endl;
}