// Saya Marvel Ravindra Dioputra [2200481] LatPrak4 C++ dalam Mata Kuliah DPBO 
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#pragma once
#include "Vehicle.cpp"  // composite bahwa garage mempunyai vehicle
#include <vector>       // untuk list menampung kendaraan pada garage

class Garage {
private:
    string namaGarasi;                  // atribut nama garasi
    int luasGarasi;                     // atribut luas garasi
    vector<Vehicle> daftarKendaraan;    // atribut list kendaraan

public:
    // konstruktor  
    Garage() {

    }

    Garage(string namaGarasi, int luasGarasi) : namaGarasi(namaGarasi), luasGarasi(luasGarasi) {}

    // method untuk menambahkan kendaraan ke parkiran
    void tambahKendaraan(Vehicle kendaraan) {
        if (daftarKendaraan.size() >= luasGarasi) {
            cout << "Garage " << namaGarasi << " penuh" << endl;
        } else {
            daftarKendaraan.push_back(kendaraan);
            cout << "Kendaraan masuk ke Garage " << namaGarasi << ". Kapasitas: " << luasGarasi << ", Jumlah Kendaraan: " << daftarKendaraan.size() << endl;
        }
    }

    // method untuk menampilkan kendaraan yang ada pada parkiran tersebut
    void tampilkanKendaraan() {
        cout << "Daftar Kendaraan di Garage " << namaGarasi << ":" << endl;
        for (int i = 0; i < daftarKendaraan.size(); i++) {
            cout << "Plat Nomor: " << daftarKendaraan[i].getPlat() << ", Merk: " << daftarKendaraan[i].getMerk() << ", Tahun Produksi: " << daftarKendaraan[i].getTahunProduksi() << ", Warna: " << daftarKendaraan[i].getWarna() << endl;
        }
    }

    // method untuk mengeluarkan kendaraan dari parkiran berdasarkan plat nomor yang di cari
    void keluarParkir(string platNomor) {
        for (int i = 0; i < daftarKendaraan.size(); i++) {
            if (daftarKendaraan[i].getPlat() == platNomor) {
                daftarKendaraan.erase(daftarKendaraan.begin() + i);
                cout << "Kendaraan dengan plat nomor " << platNomor << " telah keluar dari Garage " << namaGarasi << endl;
                cout << "Kapasitas: " << luasGarasi << ", Jumlah Kendaraan: " << daftarKendaraan.size() << endl;
                return;
            }
        }
        cout << "Kendaraan dengan plat nomor " << platNomor << " tidak ditemukan di Garage " << namaGarasi << endl;
    }

    // destruktor
    ~Garage() {
        
    }
};
