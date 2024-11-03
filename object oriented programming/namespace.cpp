#include <iostream>

using std::cout;
using std::endl;
using std::string;

// using namespace std; // why?

using namespace n1;

namespace n1
{
  int age = 30;
  string name = "Salih";
}

namespace n2
{
  int age = 50;
}

int main()
{
  // int age = 45;
  // int age = 34;

  // age = 18;
  cout << n1::age;
  
  return 0;
}

// if we try to create our own function and give it the same name that is already present in std namespace, that can lead to name collisions and ambiguity