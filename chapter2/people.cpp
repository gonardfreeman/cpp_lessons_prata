#include <iostream>

using namespace std;
//6898758899
//3107873781

int main()
{
  const double hundr = 10;
  long long e_pop;
  long long c_pop;
  char perc = '%';
  cout << "Enter population of Earth: ";
  cin >> e_pop;
  cout << endl << "Enter population of your country: ";
  cin >> c_pop;
  // cout << float(c_pop) << endl;
  // cout << float(e_pop) << endl;

  double percentage = double(c_pop) / double(e_pop) * hundr;
  cout << "Percentage is " << percentage << perc << endl;
}