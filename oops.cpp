#include <iostream>
using namespace std;

class Rectangle
{
private:
  int width;
  int length;

protected:
  int secret;

public:
  void set(int w, int l);
  int area();
};

class Employee
{
public:
  string Name;
  string Company;
  int Age;

  void IntroduceYourself()
  {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }
};

class Vehicle
{
protected:
  string brand;
  int year;

public:
  // Constructor
  Vehicle(const string &brand, int year) : brand(brand), year(year) {}

  // Virtual destructor
  virtual ~Vehicle() {}

  // Method to display vehicle information
  virtual void displayInfo() const
  {
    cout << "Brand: " << brand << ", Year: " << year << endl;
  }
};

class Car : public Vehicle
{
private:
  int numDoors;

public:
  Car(const string &brand, int year, int numDoors) : Vehicle(brand, year), numDoors(numDoors) {}

  void displayInfo() const override
  {
    cout << "Car - ";
    Vehicle::displayInfo(); // Call base class method to display brand and year
    cout << "Number of doors: " << numDoors << endl;
  }
};

int main()
{

  Rectangle r1;

  // cout << r1.width;  // inaccessible
  // cout << r1.area(); // accessible
  // cout << r1.secret; // inaccessible

  return 0;
}
