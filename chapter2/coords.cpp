#include <iostream>

using namespace std;

int main()
{
  int g;
  int m;
  int s;
  const int seconds_minutes = 60;
  const int seconds_minutes_sqrt = seconds_minutes * seconds_minutes;
  cout << "Enter degrees: __\b\b";
  cin >> g;
  cout << "Enter minutes: __\b\b";
  cin >> m;
  cout << "Enter seconds: __\b\b";
  cin >> s;
  
  float minutes_in_degrees = float(m) / float(seconds_minutes);
  float seconds_in_degrees = float(s) / float(seconds_minutes_sqrt);
  float in_degrees = g + minutes_in_degrees + seconds_in_degrees;

  cout << "Its - " << in_degrees << " degrees";

  return 0;
}