#include <iostream>
using namespace std;

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

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }
};

int main()
{
  // Employee employee1;

  // employee1.Name = 'John';
  // employee1.Company = 'Code Wave';
  // employee1.Age = 24;
  // employee1.IntroduceYourself();

  // Employee employee2;
  // employee2.Name = 'Abi';
  // employee2.Company = 'Google';
  // employee2.Age = 28;
  // employee2.IntroduceYourself();

  // default constructor: automatically invoked by compiler

  // 3 rules for creating constructor
  // constructor is a method that doesn't have a return type
  // it has the same name as the class it belongs to
  // constructor must be public

  Employee employee1 = Employee("Abi", "Google", 28);

  return 0;
}


