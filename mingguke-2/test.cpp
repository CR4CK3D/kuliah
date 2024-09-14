#include <iostream>
using namespace std;


int main(){
    int nilai_ujian;

    cout << " MASUKAN NILAI :";
    cin >> nilai_ujian;

    if(nilai_ujian > 80)
    {
        cout << "anda hebat";
    }
    else if(nilai_ujian > 50)
    {
        cout << " NIAT BELAJAR !!";
    }
    else
    {
        cout << "GIAT LAGI BELAJARNYA!";
    }
}