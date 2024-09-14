#include <iostream>
using namespace std;

void tugas1() {
    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur >= 17) {
        cout << "Udah cukup umur, silahhkan mengikuti pemilu";
    } else {
        cout << "Belum cukup umur, cepet ultah gih";
    }
}
void tugas2() {
    double hasil, tugas, uas, uts;
    cout << "NILAI TUGAS :";
    cin >> tugas;
    cout << "NILAI UTS :";
    cin >> uts;
    cout << "NILAI UAS :";
    cin >> uas;

     cout << "NILAI TUGAS:" << tugas << endl;
     cout << "NILAI UTS:" << uts << endl;
     cout << "NILAI UAS:" << uas << endl;
hasil = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);

cout << " Total Nilai : " << hasil << endl;

if (hasil >= 70)
{
 cout <<"ANDA LULUS!" << endl;
}
else if (hasil < 70 && hasil >= 50)
{
   cout << "PERBAIKAN!! " << endl;
}
else
{
   cout <<"CIEE GAK LULUS" << endl;
}

}
void tugas3() {
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
}

int main() {
    int pilihan;
    bool jeany = false;

    while(!jeany){
    system("CLS");
    cout << "===============================" << endl;
        cout << "   || || NOMOR 1 - 2 || ||       " << endl;
        cout << "===============================" << endl;
        cout << "1. UMUR PEMILU" << endl;
        cout << "2. NILAI TUGAS" << endl;
        cout << "3. BUNGA BANK" << endl;
        cout << "4. EXIT" << endl;
        cout << "===============================" << endl;
        cout << "PILIHAN MU : ";
        cin >> pilihan;
    
    switch (pilihan) {
        case 1:
            tugas1();
            break;
        case 2 :
            tugas2();
            break;
        case 3:
            tugas3();
            break;
        case 4:
                cout << "SESSION END " << endl;
                jeany = true;
                break;
        default:    
            cout << "GAK ADA PILIHANNYA!" << endl;
    }

    if (!jeany) {
        cout << "\nENTER UNTUK MELANJUTKAN !";
        cin.ignore(); 
        cin.get();
    }
    
}
    return 0;
}
