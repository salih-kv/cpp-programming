#include <iostream>
using namespace std;

class Vehicle
{

protected:
  string vehicleType;

  class Car
  {
  private: // Access specifier | [public, private, protected]
    string brand;
    string model;
    int year;

    void displayInfo()
    {
      cout << "Brand: " << brand << endl;
      cout << "Model: " << model << endl;
      cout << "Year: " << year << endl;
    }

    void greetUser();
  };

}

// function definition outside the class
void
greetUser()
{
  cout << "Hello";
}

int main()
{

  Car car1;
  car1.

      // myCar.brand = "Toyota";
      // myCar.model = "Camry";
      // myCar.year = 2022;

      // myCar.greetUser();
      // myCar.displayInfo();

      return 0;
}
