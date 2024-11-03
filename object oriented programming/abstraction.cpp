#include <iostream>
using namespace std;

// abstract class
class AbstractEmployee
{
  // rule: whichever class inherits the abstract class, that class will have to provide implementation for this method below
  virtual void AskForPromotion();
};

class Employee : AbstractEmployee
{
private:
  string Name;
  string Company;
  int Age;

public:
  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }

  void AskForPromotion()
  {
    if (Age > 30)
      cout << Name << " got promoted!" << endl;
    else
      cout << Name << ", sorry No promotion for you!" << endl;
  }
};

int main()
{
  Employee employee1 = Employee("John", "Apple", 20);
  Employee employee2 = Employee("Abi", "Google", 35);

  employee1.AskForPromotion();
  employee2.AskForPromotion();

  return 0;
}
