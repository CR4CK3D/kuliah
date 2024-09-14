#include <iostream>
using namespace std;

int main(){

    string name = "vinsen";
    string pass = "abcd";

    cout << "USERNAME :";
    cin >> name;

    cout << "PASS :";
    cin >> pass;

    if (name == "vinsen" && pass == "abcd")
    {
        cout << "LOGIN BERHASIL";
    }
    else
    {
        cout << "LOGIN GAGAL";
    }

    return 0;
}