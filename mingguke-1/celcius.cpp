#include <iostream>
using namespace std;

int main(){
    float F, C;
     
     cout << "|| KONVESI DERAJAT FAHRENHEIT KE CELCIUS ||" << endl;

    cout << "DERAJAT FAHRENHEIT : ";
    cin >> F;

    C = 5.0 / 9.0 * (F - 32);

    cout << F << " F " << C << " C. " << endl;
    return 0;
}