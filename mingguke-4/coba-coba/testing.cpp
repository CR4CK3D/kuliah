#include <iostream>
using namespace std;

int main(){

    string username = "halo";
    string pass = "abc123";
    bool memeriksa = true;

    while (memeriksa)
    {
        cout << "Masukan Username : ";
        cin >> username;

        cout << "Masukan Password : ";
        cin >> pass;
        
        if (username == "halo" && pass == "abc123")
        {
            cout << "Login Berhasil" << endl;
            break;
        }
        else {
            cout << "Login Gagal" << endl;
        }
        
    }
    

    return 0;
}