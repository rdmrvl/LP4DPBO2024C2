# Saya Marvel Ravindra Dioputra [2200481] LatPrak4 Python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# class vehicle
class Vehicle:
    # inisialisasi/instansiasi
    def __init__(self, plat_nomor, merk, tahun_produksi, warna):
        self.plat_nomor = plat_nomor            # atribut plat nomor
        self.merk = merk                        # atribut merk
        self.tahun_produksi = tahun_produksi    # atribut tahun produksi
        self.warna = warna                      # atribut warna

    # method menampilkan data vehicle
    def display(self):
        print("Plat Nomor:", self.plat_nomor)
        print("Merk:", self.merk)
        print("Tahun Produksi:", self.tahun_produksi)
        print("Warna:", self.warna)
