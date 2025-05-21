#include <iostream>
using namespace std;

int main(){
    //Contoh Kehidupan Nyata
    //Contoh ini menunjukkan bagaimana Anda dapat menggunakan if..else "membuka pintu" jika pengguna memasukkan kode yang benar:
    int doorCode = 1337;
    if(doorCode == 1337){
        cout << "Correct code.\nThe door is now open." << endl;
    } else {
        cout << "Wrong code.\nThe door remains closed." << endl;
    }
    cout << "======================" << endl;

    //Contoh ini menunjukkan bagaimana Anda dapat if..else mengetahui apakah suatu angka positif atau negatif:
    int myNum = 10;
    if(myNum > 0){
        cout << "The value is a positif number." << endl;
    } else if(myNum < 0){
        cout << "The value is a negative number." << endl;
    } else {
        cout << "The value is 0." << endl;
    }
    cout << "======================" << endl;

    //Cari tahu apakah seseorang sudah cukup umur untuk memilih:
    int myAge = 25;
    int votingAge = 18;
    if(myAge >= votingAge){
        cout << "Old enough to vote!" << endl;
    } else {
        cout << "Not old enough to vote." << endl;
    }
}