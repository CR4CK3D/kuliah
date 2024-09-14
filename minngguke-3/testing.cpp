#include <iostream>
using namespace std;

int main()
{
    int input;
    int hasil = 0;
    int i = 1;

    cout << "Masukkan angka : ";
    cin >> input;

    while (i <= input)
    {
        cout << i;
        if (i < input)
        {
            cout << " + ";
        }
        hasil += i;
        i++;
    }

    cout << " = " << hasil << endl;

    return 0;
}