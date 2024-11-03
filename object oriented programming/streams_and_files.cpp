#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  fstream myFile;

  // write into a text file using c++
  myFile.open("sample.txt", ios::out); // write
  // if no file file called sample.txt found then it will create new one

  if (myFile.is_open())
  {
    myFile << "Hello\n";
    myFile << "This is second line\n";
    myFile.close();
  }

  // myFile.open("sample.txt", ios::out);
  // if (myFile.is_open())
  // {
  //   myFile << "Hello 2\n";
  //   myFile.close();
  // }

  // Append to a text file
  myFile.open("sample.txt", ios::app); // append
  if (myFile.is_open())
  {
    myFile << "Hello 2\n";
    myFile.close();
  }

  // Read from a text file
  myFile.open("sample.txt", ios::in); // read
  if (myFile.is_open())
  {
    string line;
    while (getline(myFile, line))
    {
      cout << line << endl;
    }
    myFile.close();
  }

  return 0;
}