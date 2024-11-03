#include <iostream>
using namespace std;

class Employee
{
private:
  string Name;
  string Company;
  int Age;

public:
  void setName(string name)
  {
    Name = name;
  }

  string getName()
  {
    return Name;
  }

  // advantage of encapsulation, we can set rule for modifying data
  void setAge(int age)
  {
    if (age > 18)
    {
      Age = age;
    }
  }

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
  Employee employee1 = Employee("John", "Apple", 20);
  employee1.IntroduceYourself();

  employee1.setName("Max");
  cout << employee1.getName();

  // employee1.setAge(16);

  Employee employee2 = Employee("Abi", "Google", 28);
  employee2.IntroduceYourself();

  return 0;
}
