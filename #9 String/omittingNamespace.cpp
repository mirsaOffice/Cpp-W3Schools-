#include <iostream>
#include <string>
// using namespace std;

int main(){
    //Mengabaikan Namespace
    //Anda mungkin melihat beberapa program C++ yang berjalan tanpa pustaka namespace standar. using namespace std Baris tersebut dapat dihilangkan dan diganti dengan std kata kunci, diikuti oleh :: operator for string (dan cout) objek:
    std::string greeting = "Hello";
    std::cout << greeting << std::endl;
    std::cout << "======================" << std::endl;
}