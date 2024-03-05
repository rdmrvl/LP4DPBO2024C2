// Saya Marvel Ravindra Dioputra [2200481] LatPrak4 C++ dalam Mata Kuliah DPBO 
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string platNomor;       // atribut plat nomor 
    string merk;            // atribut merk
    string tahunProduksi;   // atribut tahun produksi
    string warna;           // atribut warna

public:
    // konstruktor
    Vehicle() {
        
    }

    Vehicle(string platNomor, string merk, string tahunProduksi, string warna) : platNomor(platNomor), merk(merk), tahunProduksi(tahunProduksi), warna(warna) {}

    // setter untuk atribut vehicle
    void setPlat(string platNomor) { 
        this->platNomor = platNomor; 
    }
    
    void setMerk(string merk) { 
        this->merk = merk; 
    }
    
    void setTahunProduksi(string tahunProduksi) { 
        this->tahunProduksi = tahunProduksi; 
    }
    
    void setWarna(string warna) { 
        this->warna = warna; 
    }

    // getter untuk atribut vehicle
    string getPlat() { 
        return platNomor; 
    }
    
    string getMerk() { 
        return merk; 
    }
    
    string getTahunProduksi() {
        return tahunProduksi;
    }

    string getWarna() {
        return warna;
    }

    // destruktor
    ~Vehicle() {

    }
};
