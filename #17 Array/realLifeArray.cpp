#include <iostream>
using namespace std;

int main(){
    //Contoh Kehidupan Nyata
    //Untuk menunjukkan contoh praktis penggunaan array, mari kita buat program yang menghitung rata-rata usia yang berbeda:
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (int age : ages)
    {
        sum += age;
    }

    avg = sum / length;

    cout << "The average age is: " << avg << endl;
    cout << "======================" << endl;

    //Dan dalam contoh ini, kami membuat program yang mencari usia terendah di antara berbagai usia:
    int lowestAge = ages[0];
    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }
    cout << "The lowest age is: " << lowestAge << "\n";
    cout << "======================" << endl;
}