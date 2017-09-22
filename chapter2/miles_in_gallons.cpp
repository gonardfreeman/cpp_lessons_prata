#include <iostream>

using namespace std;

int main()
{
  int km;
  int litters;
  cout << "Enter amount of km: ";
  cin >> km;
  cout << "Enter amount of litters: ";
  cin >> litters;
  cout >> litters / km * 100;
  return 0;
}