#include <iostream>
using namespace std;

int main() {
    //Contoh Kehidupan Nyata
    //Mari kita sedikit lebih praktis!
    //Sering kali dalam contoh-contoh kami, kami menyederhanakan nama variabel agar sesuai dengna tipe datanya (myInt atau myNum untuk int tipe, myCar untuk char tipe, dan seterusnya). Hal ini dilakukan untuk menghindari kebingungan. Namun, untuk contoh praktis penggunaan variabel, kami telah membuat program yang menyimpan data berbeda tentang seorang mahasiswa :
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';
    cout << "Student ID: " << studentID << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student Fee: " << studentFee << endl;
    cout << "Student Grade: " << studentGrade << endl;
    cout << "======================" << endl;

    //Hitung Luas Persegi Panjang
    //Dalam contoh kehidupan nyata ini, kami membuat program untuk menghitung luas persegi panjang (dengna mengalikan panjang dan lebar):
    int length = 4;
    int width = 6;
    int area = length * width;
    cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
    cout << "Area of the rectangle is: " << area << endl;
    cout << "======================" << endl;
}