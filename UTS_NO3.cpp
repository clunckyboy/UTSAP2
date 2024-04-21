#include<iostream>
using namespace std;

main(){
    int i,n,e,j=0; //variabel pengulangan, batas angka, kuadrat bilangan, dan hasil penjumlahan

    system("CLS"); //clear screen

    a:
    cout << "Masukkan batas angka : "; cin >> n;

    if (n<=0){
        goto a; //jika batas angka lebih kecil atau sama dengan 0 maka ulang inputan
    }

    for (i=1; i<=n; i++){
        if(i%2!=0){ //jika pengulangan mod 2 tidak sama dengan 0 maka bilangan tersebut ganjil dan jalankan perintah
            e=i*i; //bilangan ganjil dikuadratkan
            j+=e; //penjumlahan seluruh bilangan ganjil yang dikuadratkan
        }
    }

    cout << "Hasil penjumlahan kuadrat bilangan ganjil dari 1 sampai "<< n << " adalah " << j << endl;
}