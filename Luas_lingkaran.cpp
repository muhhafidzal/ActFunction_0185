//library
#include <iostream>
using namespace std;

//deklarasi variabel global;
int r;

//implementasi fungsi dan prosedur 
void input (){
    cout <<"Masukkan jari-jari =";
    cin >> r;
}
float luaslingkaran(float phi,int a){
    return 3.14159 * a * a;
}
void output(){
    cout << "Hasilnya : " << luaslingkaran(r);
}
int main(){
    input();
    output();
}//selesai