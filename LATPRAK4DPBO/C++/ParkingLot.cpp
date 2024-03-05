// Saya Marvel Ravindra Dioputra [2200481] LatPrak4 C++ dalam Mata Kuliah DPBO 
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#pragma once
#include "Vehicle.cpp"  // composite bahwa parking lot mempunyai vehicle
#include <vector>       // untuk list menampung kendaraan pada parking lot

class ParkingLot {
private:
    int kapasitas;                      // atribut kapasitas parking lot
    vector<Vehicle> daftarKendaraan;    // atribut list kendaraan

public:
    // konstruktor
    ParkingLot() {

    }

    ParkingLot(int kapasitas) : kapasitas(kapasitas) {}

    // method untuk menambahkan kendaraan ke parkiran
    void tambahKendaraan(Vehicle kendaraan) {
        if (daftarKendaraan.size() >= kapasitas) {
            cout << "Parking Lot penuh" << endl;
        } else {
            daftarKendaraan.push_back(kendaraan);
            cout << "Kendaraan masuk ke Parking Lot. Kaspasitas: " << kapasitas << ", Jumlah Kendaraan: " << daftarKendaraan.size() << endl;
        }
    }

    // method untuk menampilkan kendaraan yang ada pada parkiran tersebut
    void tampilkanKendaraan() {
        cout << "Daftar Kendaraan di Parking Lot:" << endl;
        for (int i = 0; i < daftarKendaraan.size(); i++) {
            cout << "Plat Nomor: " << daftarKendaraan[i].getPlat() << ", Merk: " << daftarKendaraan[i].getMerk() << ", Tahun Produksi: " << daftarKendaraan[i].getTahunProduksi() << ", Warna: " << daftarKendaraan[i].getWarna() << endl;
        }
    }

    // method untuk mengeluarkan kendaraan dari parkiran berdasarkan plat nomor yang di cari
    void keluarParkir(string platNomor) {
        for (int i = 0; i < daftarKendaraan.size(); i++) {
            if (daftarKendaraan[i].getPlat() == platNomor) {
                daftarKendaraan.erase(daftarKendaraan.begin() + i);
                cout << "Kendaraan dengan plat nomor " << platNomor << " telah keluar dari Parking Lot" << endl;
                cout << "Kapasitas: " << kapasitas << ", Jumlah Kendaraan: " << daftarKendaraan.size() << endl;
                return;
            }
        }
        cout << "Kendaraan dengan plat nomor " << platNomor << " tidak ditemukan di Parking Lot" << endl;
    }

    // destruktor
    ~ParkingLot() {
        
    }
};
