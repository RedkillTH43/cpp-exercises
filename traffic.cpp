#include <iostream>
using namespace std;

int main()
{
  char colorLetter;
  cout << "Input letter of color: ";
  cin >> colorLetter;
  
  if (colorLetter == 'R' || colorLetter == 'r')
  {
    cout << "STOP" << endl;
  }
  else if (colorLetter == 'Y' || colorLetter == 'y')
  {
    cout << "READY" << endl;
  }
  else if (colorLetter == 'G' || colorLetter == 'g')
  {
    cout << "GO" << endl;
  }
  else
  {
    cout << "Invalid letter of color" << endl;
  }
  
  return 0;
}