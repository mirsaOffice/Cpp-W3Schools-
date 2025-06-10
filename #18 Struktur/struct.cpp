#include <iostream>
using namespace std;

struct food{
    string nameFood;
    string statusFood;
    int expFood;
};

int main(){
    //Struktur C++
    //Struktur (juga disebut struct) adalah cara untuk mengelompokkan beberapa variabel terkait ke dalam satu tempat. Setiap variabel dalam struktur dikenal sebagai anggota struktur. Tidak seperti array , suatu struktur dapat berisi banyak tipe data yang berbeda: int, string, bool, dll.

    //Membuat Struktur
    //Untuk membuat suatu struktur, gunakan struct kata kunci dan nyatakan setiap anggotanya di dalam kurung kurawal. Setelah deklarasi, tentukan nama variabel struktur ( myStructure dalam contoh di bawah):
    struct{
        int myNum;
        string myString;
    }myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;
    cout << "====================" << endl;

    //Satu Struktur dalam Beberapa Variabel
    //Anda dapat menggunakan koma(,) untuk menggunakan satu struktur dalam banyak variabel:
    struct{
        int myNum2;
        string myString2;
    }myStructure2, myStructure3, myStructure4;
    //Contoh ini menunjukkan cara menggunakan struktur dalam dua variabel berbeda:

    struct{
        string brand;
        string model;
        int year;
    }myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

    cout << "====================" << endl;

    //Struktur Bernama
    //Dengan memberi nama pada struktur, Anda dapat memperlakukannya sebagai tipe data. Ini berarti Anda dapat membuat variabel dengan struktur ini di mana saja dalam program dan kapan saja. Untuk membuat struktur bernama, letakkan nama struktur tepat setelah structkata kunci:
    food myFood1;
    myFood1.nameFood = "Ramen";
    myFood1.statusFood = "Good";
    myFood1.expFood = 25;

    cout << myFood1.nameFood << " " << myFood1.statusFood << " " << myFood1.expFood << endl;

    cout << "====================" << endl;
}
