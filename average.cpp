#include <iostream>

using namespace std;

int main() {
  int firstNum;
  int secondNum;
  int thirdNum;
  float result;
  
  cout << " -- Average of 3 Numbers -- " << endl;
  cout << "First Number: ";
  cin >> firstNum;
  cout << "Second Number: ";
  cin >> secondNum;
  cout << "Third Number: ";
  cin >> thirdNum;
  
  result = (firstNum + secondNum + thirdNum) / 3.0f;
  
  cout << "The average of " << firstNum << ", " << secondNum << ", " << thirdNum << " is " << result << endl;
  return 0;
}
