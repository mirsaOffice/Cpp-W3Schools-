#include <iostream>
using namespace std;

int main(){
    //Membuat Pointer
    //Anda telah belajar dari bab sebelumnya, bahwa kita bisa mendapatkan alamat memori suatu variabel dengan menggunakan & operator:
    string food = "Pizza";
    string* ptr = &food;

    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";

    //Namun, pointer adalah variabel yang menyimpan alamat memori sebagai nilainya . Variabel pointer menunjuk ke tipe data (seperti intatau string) dengan tipe yang sama, dan dibuat dengan *operator. Alamat variabel yang Anda gunakan ditetapkan ke pointer:

    //Buat variabel penunjuk dengan nama ptr, yang menunjuk ke suatu stringvariabel, dengan menggunakan tanda bintang *( string* ptr). Perhatikan bahwa tipe penunjuk harus sesuai dengan tipe variabel yang Anda gunakan. Gunakan &operator untuk menyimpan alamat memori dari variabel yang disebut food, dan tetapkan ke pointer. Sekarang, ptrmemegang nilai foodalamat memori .

}
