# Saya Marvel Ravindra Dioputra [2200481] LatPrak4 Python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# inheritance dari class vehicle
from vehicle import Vehicle

# class motorcycle
class Motorcycle(Vehicle):
    # inisialisasi/instansiasi
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        # atribut inheritance dari class vehicle
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    # method menampilkan data vehicle dan motorcycle
    def display(self):
        super().display()
        print("Jenis Motor:", self.jenis_motor)
        print("Kapasitas Tangki:", self.kapasitas_tangki)
