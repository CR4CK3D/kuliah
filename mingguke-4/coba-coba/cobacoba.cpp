#include <iostream>
using namespace std;


void log(int hasil){
     cout << "hasilnya :" << hasil << endl;
 }

int main(){
      system("CLS");
      int x = 5;
      int y = 20;
      int kurang1;
      int kali;
      int bagi;


      kurang1 = x - y; 
      kali = x * y;
      bagi = y / x;


      log(kurang1);
      log(kali);
      log(bagi);

    //   for (int i = 1; i < 8; i++)
    //   {
    //       for (int j = 1; j < i; j++)
    //       {
    //           cout << j;
    //       }
    //       cout << endl;
    //   }
    

}