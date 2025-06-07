#include <iostream>
using namespace std;

int main(){
    //Loop Bersarang
    //Anda juga dapat menempatkan loop di dalam loop lain. Ini disebut loop bersarang.
    //"Loop dalam" akan dieksekusi satu kali untuk setiap iterasi "loop luar":
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << endl;
    }
    for (int j = 1; j <= 3; ++j)
    {
        cout << " Inner: " << j << endl;
    }
    cout << "======================" << endl;

    //Contoh Tabel Perkalian
    //Contoh ini menggunakan loop bersarang untuk mencetak tabel perkalian sederhana (1 hingga 3):
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
    cout << "======================" << endl;
}