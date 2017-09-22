#include <iostream>

using namespace std;

int main()
{
  const int inch = 12;
  const float meters = 0.0254;
  const float pounds = 2.2;
  int u_feets;
  int u_inches;
  int u_pounds;
  cout << "Enter your height: " << endl;
  cout << "feets __\b\b";
  cin >> u_feets;
  cout << " inches: __\b\b";
  cin >> u_inches;
  cout << "Enter your weight: " << endl;
  cout << "pounds ___\b\b";
  cin >> u_pounds;
  int in_inches = u_feets*inch + u_inches;
  float in_meters = in_inches * meters;
  float in_kilo = u_pounds / pounds;
  float sqrt_m = in_meters * in_meters;
  float bmi = in_kilo / sqrt_m;
  cout << "Your BMI is " << bmi << endl;
  return 0;
}