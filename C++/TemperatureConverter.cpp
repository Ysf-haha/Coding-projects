#include <iostream>
using namespace std;

int main() 
{
  double temp;
  int conv;

  cout << "This is a temperature convertor" << endl;
  cout << "Enter the temperature you want to convert: ";
  cin >> temp;

  cout << "Select your desired conversion: " << endl;
  cout << "1: Celsius to Fahrenheit" << endl;
  cout << "2: Fahrenheit to Celsius" << endl;
  cout << "Your choice: ";
  cin >> conv;

  if (conv == 1)
  {
    cout << temp << " degrees Celsius is equal to " << (temp * 9/5) + 32 << " degrees Fahrenheit" << endl;
  }
  else if (conv == 2)
  {
    cout << temp << " degrees Fahrenheit is equal to " << (temp-32) * 5/9 << " degrees Celsius" << endl;
  }
  else
  {
    cout << "Not a valid conversion" << endl;
  }
  return 0;
}