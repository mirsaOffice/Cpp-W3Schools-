#include <iostream>
using namespace std;

int main(){
    //Contoh Kehidupan Nyata
    //Untuk menunjukkan contoh praktis perulangan for, mari kita buat program yang menghitung hingga 100 dengan kelipatan puluhan:
    for (int i = 0; i <= 100; i += 10)
    {
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Dalam contoh ini, kami membuat program yang hanya mencetak angka genap antara 0 dan 10 (inklusif):
    for (int i = 0; i <= 10; i = i + 2)
    {
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Disini kami hanya mencetak angka ganjil:
    for (int i = 1; i <= 10; i = i + 2)
    {
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Dalam contoh ini kita mencetak pangkat 2 hingga 512:
    for (int i = 2; i < 512; i *= 2)
    {
        cout << i << endl;
    }
    cout << "======================" << endl;

    //Dan dalam contoh ini, kami membuat program yang mencetak tabel perkalian untuk angka tertentu:
    int number = 2;
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << number * i << endl;
    }
    
    
    
    
    
}