#include <iostream>
using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur kamu : ";
    cin >> umur;

    if (umur >= 17) {
        cout << "Sudah cukup umur, silahhkan mengikuti pemilu" << endl;
    } else {
        cout << "Belum cukup umur, cepet ultah gih" << endl;
    }

    return 0;
}
