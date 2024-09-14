#include <iostream>
using namespace std;


void tugas2(){
    int x = 5;
    if (x % 2 == 0){
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (i == j || i + j == x - 1) {
                cout << " @";
            } else {
                cout << " =";
            }
        }
        cout << endl;
    }
}
void tugas3(){
      int segi;
    cout << "INPUT BARIS: ";
    cin >> segi;

    for (int i = 1; i <= segi; i++) {
        for (int a = i; a < segi; a++) {
            cout << " ";
        }
        for (int b = 1; b <= (2 * i - 1); b++) {
            cout << "*";
        }
        cout << endl;
    }
}

 int main(){
    int pilih;
    int angka;
    bool kelar = false;

    while (!kelar){
        system("CLS");
        cout << "===============================" << endl;
        cout << "   || || NOMOR 1 - 3 || ||       " << endl;
        cout << "===============================" << endl;
        cout << "1. DERET ANGKA" << endl;
        cout << "2. GAMBAR X" << endl;
        cout << "3. BARIS SEGITIGA" << endl;
        cout << "4. EXIT" << endl;
        cout << "===============================" << endl;
        cout << "PILIHAN MU : ";
        cin >> pilih;

    switch (pilih)
    {
    case 1:
        cout << "MASUKAN ANGKA : ";
    cin >> angka;

    while (angka >= 0) {
        cout << angka;
        if (angka > 0) 
        cout << ", ";
        angka -= 2;
    }
        break;
    case 2:
    tugas2();
    break;

    case 3:
    tugas3();
    break;

        case 4:
        cout << "SESSION END!" << endl;
        kelar = true;
        break;
    
    default:
        cout << "PILIHANNYA TIDAK ADA !" << endl;
    }
    if (!kelar){
        cout << "\nENTER UNTUK MELANJUTKAN !";
        cin.ignore(); 
        cin.get();
    }


    }
    



    return 0;
}