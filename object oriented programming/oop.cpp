#include <iostream>

using namespace std;

class Printer
{
  string name;
  int availablePaper;

public:
  Printer(string name, int paper)
  {
    name = name;
    availablePaper = paper;
  }

  void Print(string txtDoc)
  {
    // if 40 chars, requires 4 paper
    int requiredPaper = txtDoc.length() / 10;

    // check enough paper available to print

    if (requiredPaper > availablePaper)
      // throw "No paper available enough to print!:"; // exception
      throw 101; // int exception

    cout << "Printing..." << txtDoc << endl;
    availablePaper -= requiredPaper;
  }
};

// throw , try & catch

int main()
{

  Printer myPrinter = Printer("HP DeskJet printer", 3);

 try
  {
    myPrinter.Print("Hello, my name is salih. lorem ipsum. Hello, my name is"); // 40
  } 
  // catch (const char *txtException)
  // {
  //   cout << "Error / Exception: " << txtException << endl;
  // }
  catch (int *exCode)
  {
    cout << "Error / Exception:" << exCode << endl;
  }
  catch (...) // default handler
  {
    cout << "Error / Exception:" << endl;
  }

  return 0;
}