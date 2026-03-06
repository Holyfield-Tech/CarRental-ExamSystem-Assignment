# CarRental-ExamSystem-Assignment
# C++ Programming Assignment: Inheritance and Resource Management

This repository contains two C++ programs developed for a university assignment focusing on Object-Oriented Programming (OOP) principles, specifically **Inheritance**, **Abstraction**, and **Memory Management**.

## Project Overview

### 1. Car Rental Agency System
This system manages a fleet of vehicles including Cars, SUVs, and Trucks.
- **Key Features:**
    - Uses an abstract base class `Vehicle` with common attributes: `make`, `model`, and `year`.
    - Implements a pure virtual function `calculateRentalCost()` to allow polymorphic behavior for different vehicle types.
    - Derived classes (`Car`, `SUV`, `Truck`) implement specific rental logic and unique attributes like `numDoors` and `cargoCapacity`.

### 2. Online Exam System
This system handles different types of university exams (Multiple-Choice and Essay).
- **Key Features:**
    - Utilizes an abstract base class `Exam` to store `examID`, `subject`, and `duration`.
    - Implements a pure virtual function `gradeExam()` for different grading methodologies.
    - **Resource Management:** Demonstrates the use of constructors for initialization and **virtual destructors** to prevent memory leaks during dynamic memory allocation.

## OOP Concepts Used
- **Abstraction:** Using pure virtual functions and abstract base classes.
- **Inheritance:** Derived classes inheriting from base classes to promote code reusability.
- **Polymorphism:** Overriding base class methods in derived classes.
- **Encapsulation:** Using `protected` and `private` access modifiers to secure data.
- **Memory Management:** Proper use of `new` and `delete` with destructors.

## How to Run the Programs
1. Ensure you have a C++ compiler installed (like G++).
2. Clone this repository or download the `.cpp` files.
3. Compile using:
   ```bash
   g++ car_rental.cpp -o car_rental
   g++ exam_system.cpp -o exam_system
Run the executables:
code
Bash
./car_rental
./exam_system
Author
Holyfield Kinyumu Katiku
Student ID: BSCIT-05-0110/2025
code
Code
---
