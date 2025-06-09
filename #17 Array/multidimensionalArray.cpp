#include <iostream>
using namespace std;

int main(){
    //Array Multi-Dimensi
    //Untuk mendeklarasikan array multidimensi, tentukan tipe variabel, tentukan nama array diikuti tanda kurung siku yang menentukan berapa banyak elemen yang dimiliki array utama, diikuti oleh serangkaian tanda kurung siku lain yang menunjukkan berapa banyak elemen yang dimiliki sub-array:
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    //Setiap set tanda kurung siku dalam deklarasi array menambahkan dimensi lain ke array. Array seperti yang di atas dikatakan memiliki dua dimensi. Array dapat memiliki sejumlah dimensi. Semakin banyak dimensi yang dimiliki array, semakin rumit kodenya. Array berikut memiliki tiga dimensi:
    string letters2[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    //Mengakses Elemen Array Multi-Dimensi
    //Untuk mengakses elemen array multidimensi, tentukan nomor indeks di setiap dimensi array. Pernyataan ini mengakses nilai elemen di baris pertama (0) dan kolom ketiga (2) dari array huruf.
    cout << letters[0][2] << endl;
    cout << "====================" << endl;

    //Mengubah Elemen dalam Array Multi-Dimensi
    //Untuk mengubah nilai suatu elemen, lihat nomor indeks elemen di setiap dimensi:
    letters[0][0] = "Z";
    cout << letters[0][0] << endl;
    cout << "====================" << endl;

    //Loop Melalui Array Multi-Dimensi
    //Untuk melakukan perulangan pada array multidimensi, Anda memerlukan satu perulangan untuk setiap dimensi array. Contoh berikut menampilkan semua elemen dalam array huruf :
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    }
    cout << "====================" << endl;

    //Contoh ini menunjukkan cara melakukan perulangan melalui array tiga dimensi:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters2[i][j][k] << "\n";
            }
        }
    }
    cout << "====================" << endl;

    //Mengapa Array Multi-Dimensi
    //Array multidimensi sangat bagus untuk merepresentasikan grid. Contoh ini menunjukkan penggunaan praktisnya. Dalam contoh berikut, kami menggunakan array multidimensi untuk merepresentasikan permainan kecil Battleship:
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };
    int hits = 0;
    int numberOfTurns = 0;
    while (hits < 4)
    {
        int row, column;
        cout << "Selecting coordinates" << endl;
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column])
        {
            ships[row][column] = 0;
            hits++;
            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            cout << "Miss" << endl;
        }
        numberOfTurns++;
    }
    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
    cout << "====================" << endl;
}