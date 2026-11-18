#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  int num, guess, tries;
  srand(time(NULL));
  num = (rand() % 100) + 1;
  tries = 0;

  cout << "----------- NUMBER GUESSING GAME -----------" << endl;

  do
  {
    cout << "Enter a number (1-100): ";
    cin >> guess;
    tries++;

    if (guess > num)
    {
      cout << "Too high!" << endl;
    }
    else if (guess < num)
    {
      cout << "Too low!" << endl;
    }
    else
    {
      cout << "You found the number!" << endl;
      cout << "It took you " << tries << " tries to find the number " << num << endl;
    }
  } while(num != guess);
  return 0;
}
