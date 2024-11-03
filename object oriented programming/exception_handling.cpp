#include <iostream>

using namespace std;

class Printer
{
  string _name;
  int _availablePaper;

public:
  Printer(string name, int paper)
  {
    _name = name;
    _availablePaper = paper;
  }

  void Print(string txtDoc)
  {
    // if 40 characters, then it requires 4 paper
    int requiredPaper = txtDoc.length() / 10; // 40 / 10 = 4 paper

    // check enough paper available to print
    if (requiredPaper > _availablePaper)
      throw "No paper available enough to print!"; // text exception
    // throw 101; // int exception

    cout << "Printing..." << txtDoc << endl;
    _availablePaper -= requiredPaper;
  }
};

int main()
{

  Printer myPrinter = Printer("HP DeskJet X10", 10);

  myPrinter.Print("Hello, my name is salih. I am a developer.");

  // myPrinter.Print("Hello, my name is salih. I am a developer.");
  // myPrinter.Print("Hello, my name is salih. I am a developer.");
  // here we will get an exception error
  // we should handle this error.
  // for this we use try / catch

  try
  {
    myPrinter.Print("Hello, my name is salih. I am a developer.");
    myPrinter.Print("Hello, my name is salih. I am a developer.");
    myPrinter.Print("Hello, my name is salih. I am a developer.");
  }
  // here we have text type exception
  catch (const char *txtException)
  {
    cout << "Exception: " << txtException << endl;
  }
  catch (int *exCode)
  {
    cout << "Exception: " << exCode << endl;
  }
  // Default exception handler
  catch (...)
  {
    cout << "Exception happened!" << endl;
  }

  // default handler must be at the bottom

  return 0;
}
