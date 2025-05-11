#include <iostream>
using namespace std;

int main() {
    //Operator Logika
    //Seperti halnya operator perbandingan, Anda juga dapat menguji nilai benar (1) atau salah (0) dengan operator logika. Operator logika digunakan untuk menentukan logika antara variabel atau nilai :
    int x = 5;
    int y = 3;
    cout << (x > 3 && x < 10) << endl;
    cout << "======================" << endl;

    cout << (x > 3 || x < 10) << endl;
    cout << "======================" << endl;

    cout << !(x > 3 && x < 10) << endl;
    cout << "======================" << endl;
}