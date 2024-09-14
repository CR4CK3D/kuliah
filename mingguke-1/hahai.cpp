
#include <iostream>
#include <cmath> // untuk sqrt
using namespace std;

int main() {
    double a, b, c, x1;
    // Berikan nilai untuk a, b, dan c atau ambil dari input pengguna
    a = 1.0; // Contoh nilai
    b = -3.0; // Contoh nilai
    c = 2.0; // Contoh nilai
    
    // Menghitung akar x1
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    cout << "x1: " << x1 << endl;
    
    return 0;
}
