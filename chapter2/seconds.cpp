#include <iostream>

using namespace std;

int main()
{
  long long seconds;
  const int seconds_in_min = 60;
  const int seconds_in_hour = seconds_in_min * seconds_in_min;
  const int seconds_in_days = seconds_in_hour * 24;
  cout << "Enter number of seconds: ";
  cin >> seconds;
  int days = seconds / seconds_in_days;
  int seconds_after_days = seconds % seconds_in_days;
  int hours = seconds_after_days / seconds_in_hour;
  int mins_after_hours = seconds_after_days / seconds_in_min;
  int mins = mins_after_hours % seconds_in_min;
  int seconds_left = seconds_after_days % seconds_in_min;

  cout << days << " " << hours << " " << mins << " " << seconds_left << endl;
  return 0;
}