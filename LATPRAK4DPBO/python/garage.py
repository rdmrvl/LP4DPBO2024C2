# Saya Marvel Ravindra Dioputra [2200481] LatPrak4 Python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# class garage
class Garage:
    # inisialisasi/instansiasi
    def __init__(self, nama_garasi, luas_garasi):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.daftar_kendaraan = []

    # method untuk menambahkan kendaraan ke parkiran garage
    def add_vehicle(self, vehicle):
        self.daftar_kendaraan.append(vehicle)

    # method menampilkan data kendaraan dan keterangan garage
    def display_vehicles(self):
        print("Garage:", self.nama_garasi, "(Luas:", self.luas_garasi, "sqm)")
        print("Kendaraan di garasi:")
        for vehicle in self.daftar_kendaraan:
            vehicle.display()
            print()
