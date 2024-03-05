// Saya Marvel Ravindra Dioputra [2200481] LatPrak4 C++ dalam Mata Kuliah DPBO 
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#pragma once
#include "Vehicle.cpp"  // inherit class vehicle sebagai parent motorcycle

class Motorcycle : public Vehicle {
private:
    string jenisMotor;      // atribut jenis motor
    int kapasitasTangki;    // atribut kapasitas tangki

public:
    // konstruktor
    Motorcycle() {

    }

    Motorcycle(string platNomor, string merk, string tahunProduksi, string warna, string jenisMotor, int kapasitasTangki) : Vehicle(platNomor, merk, tahunProduksi, warna), jenisMotor(jenisMotor), kapasitasTangki(kapasitasTangki) {}

    // setter atribut class motorcycle
    void setJenisMotor(string jenisMotor) { 
        this->jenisMotor = jenisMotor; 
    }
    
    void setKapasitasTangki(int kapasitasTangki) { 
        this->kapasitasTangki = kapasitasTangki; 
    }

    // getter atribut class motorcycle
    string getJenisMotor() { 
        return jenisMotor; 
    }
    
    int getKapasitasTangki() { 
        return kapasitasTangki; 
    }

    // destruktor
    ~Motorcycle() {
    
    }
};
