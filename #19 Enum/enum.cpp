#include <iostream>
using namespace std;

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};

int main(){
    //Enum C++
    //Enum adalah tipe khusus yang mewakili sekelompok konstanta (nilai yang tidak dapat diubah) . Untuk membuat enum, gunakan enumkata kunci, diikuti dengan nama enum, dan pisahkan item enum dengan koma:
    enum Level myVar = MEDIUM;

    //Secara default, item pertama ( LOW) memiliki nilai 0, item kedua ( MEDIUM) memiliki nilai 1, dan seterusnya. Jika Anda sekarang mencoba mencetak myVar, maka akan muncul output 1, yang menyatakan MEDIUM:
    cout << myVar << endl;
    cout << "====================" << endl;

    //Perlu diingat bahwa jika Anda menetapkan nilai pada satu item tertentu, item berikutnya akan memperbarui nomornya sesuai dengan nilai tersebut:
}
