#include <iostream>
using namespace std;

int main(){

    double PI = 3.14;
    double jari, keliling, luas;

    cout << "KELILING LUAS LINGKARAN" << endl;

    // jari jari keliling
     cout << "Jari-jari lingkaran = ";
    cin >> jari;

    // keliling lingkaran
    keliling = PI * 2 * jari;

    // Menghitung luas lingkaran
    luas = PI * jari * jari;

    // Menampilkan hasil keliling dan luas
    cout << "\nKeliling : " << keliling << endl;
    cout << "Luas : " << luas << endl;


    return 0;
}