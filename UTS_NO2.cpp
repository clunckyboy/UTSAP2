#include<iostream>
using namespace std;

main(){

    int a; //variabel pilihan presiden

    system("CLS"); //membersihkan layar

    //tampilan pilihan presiden
    cout << "Daftar Calon Presiden: "<< endl;
    cout << "1. Soekarno" << endl;
    cout << "2. Soeharto" << endl;
    cout << "3. Bj. Habibie" << endl;
    cout << "4. Abdurrahman Wahid" << endl;
    cout << "5. Megawati Soekarno Putri" << endl;
    cout << "6. Susilo Bambang Yudhoyono" << endl;
    cout << "7. Jokowi" << endl;
    cout<<"Masukkan Pilihan Presiden anda : "; cin >> a;

    system("CLS"); //membersihkan layar

    //menyeleksi nilai variabel a
    switch(a){ 
        case 1 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 1. Soekarno"; break;
        case 2 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 2. Soeharto"; break;
        case 3 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 3. Bj. Habibie"; break;
        case 4 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 4. Abdurrahman Wahid"; break;
        case 5 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 5. Megawati"; break;
        case 6 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 6. Susilo Bambang Yudhoyono"; break;
        case 7 : cout<<"Pilihan anda telah disimpan, pilihan anda adalah 7. Jokowi"; break;
        default : cout<<"Presiden tidak ada"; break; //tidak ada pilihan
    }
}