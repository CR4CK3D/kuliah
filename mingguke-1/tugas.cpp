#include <iostream>
using namespace std;

int main() {
    int pilihan;
    bool kelar = false;

    while (!kelar) {
        system("CLS");

        cout << "===============================" << endl;
        cout << "   || || NOMOR 1 - 3 || ||       " << endl;
        cout << "===============================" << endl;
        cout << "1. KELILING SEGIEMPAT" << endl;
        cout << "2. LINGKARAN" << endl;
        cout << "3. FAHRENHEIT KE CELCIUS" << endl;
        cout << "4. EXIT" << endl;
        cout << "===============================" << endl;
        cout << "PILIHAN MU : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                float panjang, lebar, keliling;
                cout << "Masukkan panjang segiempat: ";
                cin >> panjang;
                cout << "Masukkan lebar segiempat: ";
                cin >> lebar;
                keliling = 2 * (panjang + lebar);
                cout << "Keliling segiempat adalah: " << keliling << endl;
                break;
            }
            case 2: {
                double PI = 3.14;
                double jari, keliling, luas;
                cout << "Jari-jari lingkaran = ";
                cin >> jari;
                keliling = PI * 2 * jari;
                luas = PI * jari * jari;
                cout << "\nKeliling : " << keliling << endl;
                cout << "Luas : " << luas << endl;
                break;
            }
            case 3:
                float F, C;
                cout << "Masukkan suhu dalam Fahrenheit: ";
                cin >> F;
                C = 5.0 / 9.0 * (F - 32);
                cout << F << " F sama dengan " << C << " C." << endl;
                break;

            case 4:
                cout << "SESSION END " << endl;
                kelar = true;
                break;
            default:
                cout << "PILIHAN TIDAK ADA!" << endl;
                break;
        }

        if (!kelar) {
            cout << "\nENTER UNTUK MELANJUTKAN !";
            cin.ignore(); 
            cin.get();
        }
    }

    return 0;
}