#include <iostream>
using namespace std; //menambahkan "namespace" antara using dan std

int main () {
    system ("CLS");

    int a; //mengubah variabel a menjadi integer

    umur: //mengganti ';' dengan ':'
    cout << "Tebak Umur Saya : "; //menambahkan ';' di akhir perintah
    cin >> a; //mengganti "<<" dengan ">>"

    if (a == 20){ //membuat menambahkan '=' satu lagi karena untuk membandingkan dua nilai
        cout << "Jawaban Anda Benar" << endl;
    } else { //menghapus if karena selain 20 maka salah
        cout << "Jawaban Salah, Coba Lagi..." << endl; //menambahkan ';' di akhir endl
        goto umur;
    }
    
    cout << "Program Selesai";

    return 0;
}
