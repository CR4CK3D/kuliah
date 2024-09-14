#include <iostream>
using namespace std;


// string fullname(string fname, string lname){
//     return fname + " " + lname;
// }

// int main(){
//     string nama, belakang;

//     cout << "Masukan Nama Depan: ";
//     cin >> nama;

//     cout << "Nama Belakang Anda: ";
//     cin >> belakang;

//     cout << fullname (nama, belakang);


double umur(int x, int y){
    if(x >= y) {
        return y;
    }
    else{
        return x;
    }
}
int main(){

    cout << umur(5,10);


}