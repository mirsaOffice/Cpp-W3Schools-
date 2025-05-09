#include <iostream>
using namespace std;

int main() {
    //Tipe Numerik
    //Gunakan int saat Anda perlu menyimpan bilangan bulat tanpa desimal, seperti 35 atau 1000, dan float atau double saat Anda memerlukan bilangan floating point (dengan desimal), seperti 9,99 atau 3,14515.
    int myNum = 1000;
    cout << myNum << endl;
    cout << "======================" << endl;

    float myFloat = 5.75;
    cout << myFloat << endl;
    cout << "======================" << endl;

    double myDouble = 19.99;
    cout << myDouble << endl;
    cout << "======================" << endl;

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;
    cout << "======================" << endl;
}