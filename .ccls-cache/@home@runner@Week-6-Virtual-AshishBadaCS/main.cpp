/**********************
Lab: Week 5
Student first name: Ashish
Student last name:Bada
***********************/
#include <iostream>
using namespace std;

// Vehicle
class Vehicle {
protected:
  int wheels;
  int doors;

public:
  Vehicle(int w = 0, int d = 0) : wheels(w), doors(d) {}
  virtual void print() {
    cout << "Vehicle has " << wheels << " wheels and ";
    cout << doors << " doors." << endl;
  }
};

// Car
class Car : public Vehicle {
private:
  int mpg;
  string modelName;

public:
  Car(int w = 0, int d = 0, int m = 0, string n = "")
      : Vehicle(w, d), mpg(m), modelName(n) {}
  void print() {
    cout << "Car " << modelName << " gets " << mpg << " miles per gallon and has ";
    cout << wheels << " wheels and ";
    cout << doors << " doors." << endl;
  }
};

// Truck
class Truck : public Vehicle {
private:
  int mpg;
  int tons;
  string modelName;

public:
  Truck(int w = 0, int d = 0, int m = 0, int t = 0, string n = "")
      : Vehicle(w, d), mpg(m), tons(t), modelName(n) {}
  void print() {
    cout << "Truck " << modelName << " gets " << mpg << " miles per gallon, can carry "
         << tons << " tons, and has ";
    cout << wheels << " wheels and ";
    cout << doors << " doors." << endl;
  }
};

int main() {
  // declare local variables
  int wheels, doors, mpg, tons;
  string modelName;

  cout << "Enter car details\n";
  cout << "Number of wheels: ";
  cin >> wheels;
  cout << "Number of doors: ";
  cin >> doors;
  cout << "MPG: ";
  cin >> mpg;
  cout << "Model name: ";
  cin >> modelName;

  // declare Car object
  Car car(wheels, doors, mpg, modelName);
  cout << endl;
  cout << "Enter truck details\n";
  cout << "Number of wheels: ";
  cin >> wheels;
  cout << "Number of doors: ";
  cin >> doors;
  cout << "MPG: ";
  cin >> mpg;
  cout << "How many tons can the truck carry: ";
  cin >> tons;
  cout << "Model name: ";
  cin >> modelName;
  // declare Truck object
  Truck truck(wheels, doors, mpg, tons, modelName);
  cout << endl;

  // call print function for your car and for your truck
  car.print();
  truck.print();

  cout << "\nGoodbye\n";
  return 0;
}