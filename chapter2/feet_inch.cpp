#include <iostream>

using namespace std;

int main()
{
  const int inch = 12;
  int tall;
  cout << "Enter your height in inches: __\b\b";
  cin >> tall;
  int remainder_of_div = tall%inch;
  cout << "Your height is: " << tall/inch << " feets and " << remainder_of_div << " inches!" << endl;
  return 0;
}