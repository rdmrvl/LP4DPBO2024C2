# Saya Marvel Ravindra Dioputra [2200481] LatPrak4 Python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# inheritance dari class vehicle
from vehicle import Vehicle

# class car
class Car(Vehicle):
    # inisialisasi/instansiasi
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jumlah_kursi, jumlah_pintu):
        # atribut inheritance dari class vehicle
        super().__init__(plat_nomor, merk, tahun_produksi, warna)   
        self.jumlah_kursi = jumlah_kursi    
        self.jumlah_pintu = jumlah_pintu

    # method menampilkan data vehicle dan car
    def display(self):
        super().display()
        print("Jumlah Kursi:", self.jumlah_kursi)
        print("Jumlah Pintu:", self.jumlah_pintu)
