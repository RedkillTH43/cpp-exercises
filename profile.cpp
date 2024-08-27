#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  long int lrn;
  int age;
  char sex;
  float height, weight;
  
  cout << "Input Name: ";
  getline(cin, name);
  cout << "Input LRN: ";
  cin >> lrn;
  cout << "Input Age: ";
  cin >> age;
  cout << "Input Sex: ";
  cin >> sex;
  cout << "Input Height in cm: ";
  cin >> height;
  cout << "Input Weight in kg: ";
  cin >> weight;
  
  cout << " " << endl;
  
  cout << "Name: " << name << endl;
  cout << "LRN: " << lrn << endl;
  cout << "Age: " << age << endl;
  cout << "Sex: " << sex << endl;
  cout << "Height(cm): " << height << "cm" << endl;
  cout << "Weight(kg): " << weight << "kg" << endl;
}