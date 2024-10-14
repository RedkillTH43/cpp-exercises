#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Input number: ";
  cin >> number;
  
  if (number < 0)
  {
    cout << "Negative" << endl;
  }
  else if (number > 0)
  {
    cout << "Positive" << endl;
  }
  else
  {
    cout << "Neither positive nor negative" << endl;
  }
  return 0;
}