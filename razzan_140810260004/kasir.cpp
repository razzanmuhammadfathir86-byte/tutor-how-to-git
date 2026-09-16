#include<iostream>

using namespace std;
int main(){
    unsigned int purch, total, disc;
    cout<<"=== Kalkulator Kasir Toko Buku ==="<<endl;
    cout<<"Masukkan total belanja (Rp): ";
    cin>>purch;
    cout<<"\n--- Ringkasan Pembayaran ---"<<endl;
    if(purch >= 100000 && purch <= 299000){
        disc = purch*0.1;
        total = purch - disc;
        cout<<"Diskon(10%): Rp "<<disc<<endl;
        cout<<"Total bayar: Rp "<<total;
    }
    else if (purch >= 300000){
        disc = purch*0.2;
        total = purch - disc;
        cout<<"Diskon(20%): Rp "<<disc<<endl;
        cout<<"Total bayar: Rp "<<total;
    }
    else{
        cout<<"Diskon(0%): Rp "<<0<<endl;
        cout<<"Total bayar: Rp "<<purch;
    }
}