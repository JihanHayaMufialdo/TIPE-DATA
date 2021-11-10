#include <iostream>
using namespace std;

int main()
{
  char  angka1;
  short angka2;
  int   angka3;
  long  angka4;
 
  angka1 = 99;  //dalam daftar karakter ASCII, urutan 99 merupakan huruf c
  angka2 = 32767;
  angka3 = 2147483647;
  angka4 = 2147483647;
 
  cout << "Isi variabel angka1 (char)   : " << angka1 << endl;
  cout << "Isi variabel angka2 (short)  : " << angka2 << endl;
  cout << "Isi variabel angka3 (int)    : " << angka3 << endl;
  cout << "Isi variabel angka4 (long)   : " << angka4 << endl;
 
  return 0;
}
