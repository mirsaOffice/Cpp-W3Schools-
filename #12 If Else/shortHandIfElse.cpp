#include <iostream>
using namespace std;

int main(){
    //Singkatan If Else(Operator Terner)
    //Ada juga singkatan if else, yang dikenal sebagai operator terner karena terdiri dari tiga operan. Ini dapat digunakan untuk mengganti beberapa baris kode dengan satu baris, dan sering digunakan untuk mengganti pernyataan if else sederhana:
    int time = 20;
    if(time < 18){
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }
    cout << "======================" << endl;

    //Anda cukup menulis:
    string result = (time < 18) ? "Good day." : "Good evening";
    cout << result << endl;
}