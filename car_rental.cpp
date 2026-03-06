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
File 2: exam_system.cpp
code
C++
#include <iostream>
#include <string>

class Exam {
protected:
    std::string examID;
    std::string subject;
    int duration;

public:
    Exam(std::string id, std::string sub, int dur) : examID(id), subject(sub), duration(dur) {
        std::cout << "Exam " << examID << " Created.\n";
    }
    virtual ~Exam() { std::cout << "Exam " << examID << " Destroyed.\n"; }
    virtual void gradeExam() = 0;
};

class MultipleChoiceExam : public Exam {
    int questions;
public:
    MultipleChoiceExam(std::string id, std::string sub, int dur, int q) : Exam(id, sub, dur), questions(q) {}
    void gradeExam() override { std::cout << "Grading Multiple Choice via Scanner.\n"; }
};

class EssayExam : public Exam {
    std::string topic;
public:
    EssayExam(std::string id, std::string sub, int dur, std::string t) : Exam(id, sub, dur), topic(t) {}
    void gradeExam() override { std::cout << "Grading Essay Exam manually on topic: " << topic << "\n"; }
};

int main() {
    Exam* e1 = new MultipleChoiceExam("EX101", "Math", 60, 50);
    Exam* e2 = new EssayExam("EX102", "History", 120, "Industrial Revolution");

    e1->gradeExam();
    e2->gradeExam();

    delete e1;
    delete e2;
    return 0;
}
