#include <iostream>
using namespace std;

int main(){
    //Melakukan Looping Melalui Array
    //Anda dapat melakukan pengulangan melalui elemen-elemen array dengan for loop. Contoh berikut menampilkan semua elemen dalam array mobil:
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << endl;
    }
    cout << "======================" << endl;

    //Contoh ini menampilkan indeks setiap elemen beserta nilainya:
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << cars[i] << endl;
    }
    cout << "======================" << endl;

    //Dan contoh ini menunjukkan cara melakukan perulangan melalui array bilangan bulat:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << endl;
    }
    cout << "======================" << endl;
}