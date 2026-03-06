#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(std::string mk, std::string md, int yr) : make(mk), model(md), year(yr) {}
    virtual ~Vehicle() {}
    virtual double calculateRentalCost(int days) = 0; // Pure virtual function
};

class Car : public Vehicle {
    int numDoors;
public:
    Car(std::string mk, std::string md, int yr, int doors) : Vehicle(mk, md, yr), numDoors(doors) {}
    double calculateRentalCost(int days) override { return days * 50.0; }
};

class SUV : public Vehicle {
public:
    SUV(std::string mk, std::string md, int yr) : Vehicle(mk, md, yr) {}
    double calculateRentalCost(int days) override { return days * 80.0; }
};

class Truck : public Vehicle {
    double cargoCapacity;
public:
    Truck(std::string mk, std::string md, int yr, double cap) : Vehicle(mk, md, yr), cargoCapacity(cap) {}
    double calculateRentalCost(int days) override { return days * 120.0; }
};

int main() {
    Car c("Toyota", "Camry", 2022, 4);
    SUV s("Jeep", "Wrangler", 2023);
    Truck t("Ford", "F150", 2021, 2.5);

    std::cout << "Car Rental (3 days): $" << c.calculateRentalCost(3) << std::endl;
    std::cout << "SUV Rental (3 days): $" << s.calculateRentalCost(3) << std::endl;
    std::cout << "Truck Rental (3 days): $" << t.calculateRentalCost(3) << std::endl;
    return 0;
}
