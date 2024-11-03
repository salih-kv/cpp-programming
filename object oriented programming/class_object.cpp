#include <iostream>
using namespace std;

// user defined data type
class Rectangle
{
  // rule : by default everything inside class is 'private'
  private :
    int width; // attributes
    int length;

  protected:
    int secret;

  public:
    void set(int w, int l); // methods
    int area();
};

int main()
{

  Rectangle r1;

  // cout << r1.width;  // inaccessible
  // cout << r1.area(); // accessible
  // cout << r1.secret; // inaccessible

  return 0;
}