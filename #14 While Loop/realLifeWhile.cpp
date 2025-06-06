#include <iostream>
using namespace std;

int main(){
    //Contoh Kehidupan Nyata
    //Untuk menunjukkan contoh praktis dari while loop, kami membuat program "hitung mundur" sederhana:
    int countdown = 3;
    while (countdown > 0)
    {
        cout << countdown << endl;
        countdown--;
    }
    cout << "Happy New Year!!" << endl;
    cout << "======================" << endl;

    //Dalam contoh ini, kami membuat program yang hanya mencetak angka genap antara 0 dan 10 (inklusif):
    int i = 0;
    while (i <= 10)
    {
        cout << i << endl;
        i += 2;
    }
    cout << "======================" << endl;

    //Dalam contoh ini kita menggunakan loop while untuk membalikkan beberapa angka:
    int numbers = 12345;
    int revNumbers = 0;
    while (numbers){
        revNumbers= revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }
    cout << "Reversed numbers: " << revNumbers << endl;
    cout << "======================" << endl;

    //Untuk menunjukkan contoh praktis dari loop while yang dikombinasikan dengan pernyataan if else, katakanlah kita memainkan permainan Yatzy:
    int dice = 1;
    while (dice <= 6)
    {
        if (dice < 6)
        {
            cout << "No Yatzy" << endl;
        } else {
            cout << "Yatzy!" << endl;
        }
        dice = dice + 1;
        
    }
    
    
}