#include <iostream>
using namespace std;

int main(){
    //Membuat Referensi
    //Variabel referensi adalah alias untuk variabel yang sudah ada. Variabel ini dibuat menggunakan &operator:
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    cout << "====================" << endl;
}
