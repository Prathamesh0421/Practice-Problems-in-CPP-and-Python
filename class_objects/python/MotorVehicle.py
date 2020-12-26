
class MotorVehicle():

    color = 'black'
    engineCapacity = '100'

    def __init__(self,name, fuelType, yearOfManufacture):
        self.name = name
        self.fuelType = fuelType
        self.yearOfManufacture = yearOfManufacture
    

    def displayCarDetails(self):
        print("Name: {}\nfuelType: {}\n"
        "Year of Manufacture: {}\n"
        "Color: {}\n"
        "Engine Capacity: {}\n"
        .format(self.name,self.fuelType,self.yearOfManufacture,
        MotorVehicle.color,MotorVehicle.engineCapacity))
    
