#include <iostream>
using namespace std;

main(){

    string nim,nil,nama,mk,nd;//variabel nim, nilai huruf, nama, mata kuliah, dan nama dosen
    char kom; //variabel kom
    float nt,nq,nut,nua,nilai; //variabel nilai tugas, nilai quiz, nilai UTS, nilai UAS, dan nilai akhir

    a:
    system("CLS"); //membersihkan layar

    cout<<"Masukkan Nama          : "; getline(cin,nama); //meminta inputan nama dengan spasi menggunakan getline
    cout<<"Masukkan NIM           : "; cin>>nim; //meminta inputan nim
    cout<<"Masukkan KOM           : "; cin>>kom; //meminta inputan kom
    cin.ignore(); //membersihkan buffer input setelah perintah cin
    cout<<"Masukkan Mata Kuliah   : "; getline(cin,mk); //meminta inputan mata kuliah dengan spasi
    cout<<"Masukkan Nama Dosen PA : "; getline(cin,nd); //meminta inputan nama dosen PA
    cout<<"Masukkan Nilai Tugas   : "; cin>>nt; //meminta inputan nilai tugas berupa angka
    cout<<"Masukkan Nilai Quiz    : "; cin>>nq; //meminta inputan nilai quis 
    cout<<"Masukkan Nilai UTS     : "; cin>>nut; //meminta inputan nilai UTS
    cout<<"Masukkan Nilai UAS     : "; cin>>nua; //meminta inputan nilai UAS

    nilai = nt*0.2 + nq*0.1 + nut*0.35 + nua*0.35; //kalkulasi nilai akhir

    //menyeleksi nilai akhir untuk melakukan penilaian huruf
    if(nilai<=100 && nilai>=80){
        nil="A";
    } else if(nilai<80 && nilai>=60){
        nil="B";
    } else if(nilai<60 && nilai>=40){
        nil="C";
    } else if(nilai<40 && nilai>=20){
        nil="D";
    } else if(nilai>=0 && nilai<20){
        nil="E";
    } else{
        nil="Tidak ada nilai";
    }

    system("CLS"); //membersihkan layar

    cout<<"Nama        : "<<nama<<endl; //membuat output nama
    cout<<"NIM         : "<<nim<<endl; //membuat output nim
    cout<<"KOM         : "<<kom<<endl; //membuat output kom
    cout<<"Dosen PA    : "<<nd<<endl; //membuat output dosen PA
    cout<<"Mata Kuliah : "<<mk<<endl; //membuat output mata kuliah
    cout<<"Nilai       : "<<nil<<endl; //membuat output nilai huruf

}