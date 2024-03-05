// Saya Marvel Ravindra Dioputra [2200481] LatPrak4 C++ dalam Mata Kuliah DPBO 
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#pragma once
#include "Vehicle.cpp"  // inherit class vehicle sebagai parent car 

class Car : public Vehicle {
private:
    int jumlahKursi;    // atribut jumlah kursi
    int jumlahPintu;    // atribut jumlah pintu

public:
    // konstruktor
    Car() {

    }

    Car(string platNomor, string merk, string tahunProduksi, string warna, int jumlahKursi, int jumlahPintu) : Vehicle(platNomor, merk, tahunProduksi, warna), jumlahKursi(jumlahKursi), jumlahPintu(jumlahPintu) {}

    // setter atribut class car
    void setJumlahKursi(int jumlahKursi) { 
        this->jumlahKursi = jumlahKursi; 
    }

    void setJumlahPintu(int jumlahPintu) { 
        this->jumlahPintu = jumlahPintu; 
    }

    // getter atribut class car
    int getJumlahKursi() { 
        return jumlahKursi; 
    }
    
    int getJumlahPintu() { 
        return jumlahPintu; 
    }

    // destruktor
    ~Car() {

    }
};
