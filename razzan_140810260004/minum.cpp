#include<iostream>

using namespace std;

int main(){
    int var, harga, uang;
    cout<<"=== Vending Machine Automat ==="<<endl;
    cout<<"Pilihan Minuman:\n1. Air Mineral (Rp 4000)\n2. Teh Botol (Rp 6000)\n3. Kopi Susu(Rp 10000)"<<endl;
    cout<<"Pilih kode minuman (1-3): ";
    cin>>var;
    switch (var)
    {
    case 1:
        harga = 4000;
        break;
    case 2:
        harga = 6000;
        break;
    case 3:
        harga = 10000;
        break;
    default:
        break;
    }
    cout<<"Masukkan uang anda: Rp ";
    cin>>uang;
    int sisa = uang - harga;
    cout<<"\n--- Detail Transaksi --";
    if(harga > uang){
        cout<<"\nMaaf uang anda kurang "<<"Rp "<<harga - uang<< " Transaksi Gagal!";
    }
    else{
        if(sisa > 0){
            cout<<"\nKembalian anda adalah: "<<endl;
            while(sisa >= 5000){
    cout << "\n5000";
    sisa -= 5000;
}
while(sisa >= 1000){
    cout << "\n1000";
    sisa -= 1000;
}
}
        }
cout << "\nTransaksi Berhasil"; }