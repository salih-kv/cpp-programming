#include <iostream>
#include <cmath>

using namespace std;

void area();

int main()
{

  // double result = floor(1.2);
  // double result = pow(2, 3);
  // cout << result;

  area();

  return 0;
}

void area()
{

  double radius, area;
  const double pi = 3.14;

  cout << "Enter radius: ";
  cin >> radius;

  area = pi * pow(radius, 2);

  // Chaining
  cout << "Area = " << area;
}