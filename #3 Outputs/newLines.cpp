#include <iostream>
using namespace std;

int main() {
    //Garis Baru
    //Untuk menyisipkan baris baru pada output anda, anda dapat menggunakan \n karakter :
    cout << "Hello World!";
    cout << "\nI am learning C++";
    cout << "\n======================";

    //Dua \n karakter yang berurutan akan menghasilkan baris kosong L
    cout << "Hello World!" << "\n\n";
    cout << "I am learning C++";
    cout << "\n======================";

    //Cara lain untuk menyisipkan baris baru adalah dengan endl manipulator :
    cout << "Hello World!" << endl;
    cout << "I am learning C++";
    cout << "\n======================";
}
