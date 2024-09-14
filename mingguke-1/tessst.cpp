#include <iostream>
using namespace std;

int main() {
    int detik, menit, jam, hari;

    cout << "Masukan Jumlah Detik : "; 
    cin >> detik;
    
    hari = detik / 86400;
    detik = detik % 86400;
    jam = detik / 3600;
    detik = detik % 3600;
    menit = detik / 60;
    detik = detik % 60;

    cout << "Hasilnya Adalah : " << hari << " jam " << menit << " menit " << detik << " Detik ";

    return 0;
    
}