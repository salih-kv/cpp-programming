#include <iostream>

using namespace std;

int main()
{

  int num, temp, a, r = 0;
  cout << "Enter a number";
  cin >> num;

  temp = num;
  while (num > 0)
  {
    a = num % 10;
    r = r * 10 + a;
    num = num / 10;
  }

  if (temp == r)
    cout << "Palindrome";
  else
    cout << "Not palindrome";

  return 0;
}
