#include <iostream>
using namespace std;

int main(){
    //Pernyataan Else If
    //Gunakan else if pernyataan untuk menentukan kondisi baru jika kondisi pertama adalah false.
    int time = 22;
    if(time < 10){
        cout << "Good morning." << endl;
    }else if(time < 20){
        cout << "Good day." << endl;
    } else {
        cout << "Good evening.";
    }
}