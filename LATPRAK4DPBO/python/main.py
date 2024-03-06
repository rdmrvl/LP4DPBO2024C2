# Saya Marvel Ravindra Dioputra [2200481] LatPrak4 Python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from vehicle import Vehicle             # import class vehicle
from car import Car                     # import class car
from motorcycle import Motorcycle       # import class motorcycle
from garage import Garage               # import class garage
from parking_lot import ParkingLot      # import class parking lot

# membuat objek kendaraan (car dan motorcycle)
car1 = Car("B 1234 CD", "Toyota", 2022, "Red", 5, 4)
car2 = Car("B 5678 EF", "Honda", 2020, "Black", 4, 2)
motorcycle1 = Motorcycle("B 91011 GH", "Yamaha", 2019, "Blue", "Sport", 15)
motorcycle2 = Motorcycle("B 121314 IJ", "Suzuki", 2021, "White", "Matic", 10)

# membuat objek garage dan parking lot sertam memasukan kendaraan ke dalamnya
garage = Garage("My Garage", 100)
garage.add_vehicle(car1)
garage.add_vehicle(motorcycle1)

parking_lot = ParkingLot(3)
parking_lot.park_vehicle(car2)
parking_lot.park_vehicle(motorcycle2)

# menampilkan detail garage dan parking lot
garage.display_vehicles()
parking_lot.display_availability()

# kendaraan keluar parkiran dan menmpilkan kembali
parking_lot.leave_parking(car2)
garage.display_vehicles()
parking_lot.display_availability()
