#include <iostream>
using namespace std;

int main() {
    //Variabel adalah wadah untuk menyimpan nilai data.
    //Dalam C++, ada berbagai jenis variabel (didefinisikan dengan kata kunci berbeda), misalnya :
    /*
    int = Bilangan bulat
    double = angka koma
    char = karakter tunggal
    string = teks
    bool = benar salah
    */
   // Mendeklarasikan (membuat) Variabel
   //Untuk membuat variabel, tentukan jenisnya dan tetapkan nilainya :
   //type variableName = value;
   //Di mana type adalah salah satu tipe C++ (seperti int), dan variableName adalah nama variabel (seperti x atau myName). Tanda sama dengan digunakan untuk menetapkan nilai ke variabel. Untuk membuat variabel yang harus menyimpan angka, lihat contoh berikut :
   int myNum = 15;
   cout << myNum << endl;
   cout << "======================" << endl;

   //Anda juga dapat mendeklarasikan variabel tanpa menetapkan nilainya, dan menetapkan nilainya nanti :
   int myNum1;
   myNum1 = 15;
   cout << myNum1 << endl;
   cout << "======================" << endl;

   //Perlu diingat bahwa jika anda menetapkan nilai baru ke variabel yang sudah ada, nilai tersebut akan menimpa nilai sebelumnya :
   int myNum2 = 15;
   myNum2 = 10;
   cout << myNum2 << endl;
   cout << "======================" << endl;

   //Tipe Lainnya
   //Demonstrasi tipe data lainnya :

   myNum = 5;
   double myFloatNum = 5.99;
   char myLetter = 'D';
   string myText = "Hello";
   bool myBoolean = true;

   //Variable Tampilan
   //Objek cout digunakan bersama dengan << operator untuk menampilkan variabel. Untuk menggabungkan teks dan variabel, pisahkan keduanya dengan << operator :
   int myAge = 35;
   cout << "I am " << myAge << " years old." << endl;
   cout << "======================" << endl;

   //Tambahkan Variabel Bersama
   //Untuk menambahkan variabel ke variabel lain, Anda dapat menggunakan + operator :
   int x = 5;
   int y = 6;
   int sum = x + y;
   cout << sum << endl;
   cout << "======================" << endl;
}