//library
#include <iostream>
using namespace std;
//deklarasi variabel global
int panjang, lebar;
//implementasi fungsi dan prosedur
void input(){
    cout <<"Masukkan Panjang :";
    cin >> panjang;
    cout <<"Masukka Lebar ;";
    cin >> lebar;
}
int luaspersegi(){
    return panjang*lebar;
}
void output (){
    cout<<"Hasilnya :" << luaspersegi();
}
int main (){ // main
    input();
    output();
}//selesai