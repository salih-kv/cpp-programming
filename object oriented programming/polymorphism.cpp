#include <iostream>
using namespace std;

class AbstractEmployee
{
  virtual void AskForPromotion() = 0;
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

  string getName()
  {
    return Name;
  }

  void AskForPromotion()
  {
    if (Age > 30)
      cout << Name << " got promoted!" << endl;
    else
      cout << Name << ", sorry No promotion for you!" << endl;
  }

  // virtual function
  // check if there is implementation of this function in derived class
  // if yes that function will execute instead else this virtual function will execute.
  virtual void Work()
  {
    cout << Name << " is checking email, performing tasks..." << endl;
  }
};

class Developer : public Employee
{
public:
  string FavProgrammingLanguage;

  Developer(string name, string company, int age, string language) : Employee(name, company, age)
  {
    FavProgrammingLanguage = language;
  }

  void FixErrors()
  {
    cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
  }

  void Work()
  {
    cout << getName() << " is writing " << FavProgrammingLanguage << " code" << endl;
  }
};

class Teacher : public Employee
{
public:
  string Subject;

  Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
  {
    Subject = subject;
  }

  void PrepareLesson()
  {
    cout << getName() << " is preparing " << Subject << " lesson" << endl;
  }

  void Work()
  {
    cout << getName() << " is preparing " << Subject << " lessons" << endl;
  }
};

int main()
{
  Developer dev1 = Developer("Josh", "Microsoft", 32, "C++");
  Teacher t1 = Teacher("Max", "ABC School", 25, "English");

  // dev1.Work();
  // t1.Work();

  Employee *e1 = &dev1;
  Employee *e2 = &t1;

  e1->Work();
  e2->Work();

  return 0;
}
