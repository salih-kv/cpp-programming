#include <iomanip>
#include <iostream>

using namespace std;

//
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

//
class Employee : AbstractEmployee {
   private:
    string Name;
    string Company;
    int Age;

   public:
    void setName(string name) {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void setAge(int age) {
        if (age > 18) {
            Age = age;
        }
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry No promotion for you!" << endl;
    }
};

// inheritance private by default
class Developer : public Employee {
   public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string language) : Employee(name, company, age) {
        FavProgrammingLanguage = language;
    }

    void FixErrors() {
        cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee {
   public:
    string Subject;

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
        Subject = subject;
    }

    void PrepareLesson() {
        cout << getName() << " is preparing " << Subject << " lesson" << endl;
    }
};

int main() {
    // Developer dev1 = Developer("Josh", "Microsoft", 32, "C++");
    // dev1.FixErrors();

    // dev1.AskForPromotion();  // inaccessible bcz, inheritance private by default make it public

    // Teacher t1 = Teacher("Max", "ABC School", 25, "English");
    // t1.PrepareLesson();

    // t1.AskForPromotion();

    // output formatting
    cout << setw(20) << 120 << endl;
    cout << setw(20) << 1000;

    return 0;
}