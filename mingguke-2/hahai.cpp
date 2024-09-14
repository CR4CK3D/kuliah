#include <iostream>
using namespace std;

int main(){
     float tagihan;
    char KartuABC;
    
    cout << "JUMLAH TAGIHAN : ";
    cin >> tagihan;
    
    cout << "Apakah Anda menggunakan kartu kredit ABC? (y/n): ";
    cin >> KartuABC;
    
    if (tagihan < 100000) {
        cout << "Gak ada diskon bossku" << endl;
    } else {
        if (KartuABC == 'y' || KartuABC == 'Y') {
            cout << "Anda mendapatkan diskon 20%. Total tagihan Anda: Rp. " << tagihan * 0.8 << endl;
        } else {
            cout << "Anda mendapatkan diskon 10%. Total tagihan Anda: Rp. " << tagihan * 0.9 << endl;
        }
    }

    return 0;
}