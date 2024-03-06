# Saya Marvel Ravindra Dioputra [2200481] LatPrak4 Python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# class parking lot
class ParkingLot:
    # inisialisasi/instansiasi
    def __init__(self, kapasitas):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan = 0

    # method untuk menambahkan kendaraan ke parkiran parking lot
    def park_vehicle(self, vehicle):
        # jika masih kosong
        if self.jumlah_kendaraan < self.kapasitas:
            self.jumlah_kendaraan += 1
            print(f"{vehicle.__class__.__name__} dengan plat nomor {vehicle.plat_nomor} berhasil diparkir.")
        # jika sudah penuh
        else:
            print("Parking lot penuh")

    # method untuk kendaraan keluar parkiran
    def leave_parking(self, vehicle):
        if self.jumlah_kendaraan > 0:
            self.jumlah_kendaraan -= 1
            print(f"{vehicle.__class__.__name__} dengan plat nomor {vehicle.plat_nomor} meninggalkan parking lot.")
        else:
            print("Parking lot kosong.")

    # method menampilkan data keterangan parking lot
    def display_availability(self):
        print("Kapasitas:", self.kapasitas)
        print("Jumlah Kendaraan:", self.jumlah_kendaraan)
        print("Tersisa:", self.kapasitas - self.jumlah_kendaraan)   
