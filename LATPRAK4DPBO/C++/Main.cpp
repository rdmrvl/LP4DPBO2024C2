// Saya Marvel Ravindra Dioputra [2200481] LatPrak4 C++ dalam Mata Kuliah DPBO 
// untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#include "Garage.cpp"
#include "ParkingLot.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"

int main() {
    // membuat objek kendaraan mobil dan motor untuk di garage
    Car carGarage1("B 1234 CD", "Toyota", "2022", "Black", 4, 4);
    Car carGarage2("B 5421A AS", "Mazda", "2023", "Black", 4, 4);
    Motorcycle motorcycleGarage1("B 5678 EF", "Honda", "2023", "Red", "Sport", 10);
    Car carLot1("B 2345 AB", "Nissan", "2021", "White", 5, 4);
    Car carLot2("B 3456 BC", "Honda", "2023", "Silver", 4, 4);
    Motorcycle motorcycleLot1("B 6789 FG", "Suzuki", "2022", "Blue", "Cruiser", 15);
    Car car4("B 4567 CD", "Mazda", "2020", "Gray", 5, 4);
    Motorcycle motorcycleLot2("B 7890 GH", "Yamaha", "2021", "Black", "Touring", 12);

    // membuat objek kendaraan mobil dan motor untuk di parking lot
    Garage garage("Garasi A", 5);
    ParkingLot parkingLot(50);

    // memarkirkan objek kendaraan ke objek garage dan parking lot kedalam list masing masing
    garage.tambahKendaraan(carGarage1);
    garage.tambahKendaraan(carGarage2);
    garage.tambahKendaraan(motorcycleGarage1);

    parkingLot.tambahKendaraan(carLot1);
    parkingLot.tambahKendaraan(carLot2);
    parkingLot.tambahKendaraan(motorcycleLot1);
    parkingLot.tambahKendaraan(car4);
    parkingLot.tambahKendaraan(motorcycleLot2);

    // menampilkan isi garage
    cout << "Garage:" << endl;
    garage.tampilkanKendaraan();
    cout << endl;

    // menampilkan isi parking lot
    cout << "Parking Lot:" << endl;
    parkingLot.tampilkanKendaraan();
    cout << endl;

    // kendaraan keluar parkiran dari garage
    garage.keluarParkir("B 1234 CD");
    garage.keluarParkir("B 5421A AS");
    garage.keluarParkir("B 5678 EF");
    cout << endl;

    // menampilkan isi garage setelah ada yang keluar parkir
    cout << "Garage:" << endl;
    garage.tampilkanKendaraan();
    cout << endl;

    cout << "Parking Lot:" << endl;
    parkingLot.tampilkanKendaraan();

    return 0;
}
