#include <iostream>
using namespace std;

int main(){
    //Alamat Memori
    //Dalam contoh di halaman sebelumnya, &operator digunakan untuk membuat variabel referensi. Namun, operator ini juga dapat digunakan untuk mendapatkan alamat memori suatu variabel; yang merupakan lokasi penyimpanan variabel tersebut di komputer. Ketika sebuah variabel dibuat dalam C++, sebuah alamat memori ditetapkan ke variabel tersebut. Dan ketika kita menetapkan sebuah nilai ke variabel tersebut, nilai tersebut disimpan di alamat memori ini. Untuk mengaksesnya, gunakan & operator, dan hasilnya akan menunjukkan tempat penyimpanan variabel:
    string food = "Pizza";

    cout << &food;
    //Alamat memori dalam bentuk heksadesimal (0x..). Perhatikan bahwa Anda mungkin tidak mendapatkan hasil yang sama dalam program Anda.
    return 0;
}
