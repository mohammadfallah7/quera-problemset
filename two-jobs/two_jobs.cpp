#include <iostream>
using namespace std;

int main()
{
  string day;
  cin >> day;
  
  if (day == "shanbe")
  {
    cout << "perspolis" << '\n';
  }
  else if (day == "yekshanbe")
  {
    cout << "bahman" << '\n';
  }
  else if (day == "doshanbe")
  {
    cout << "perspolis" << '\n';
  }
  else if (day == "seshanbe")
  {
    cout << "bahman" << '\n';
  }
  else if (day == "chaharshanbe")
  {
    cout << "perspolis" << '\n';
  }
  else if (day == "panjshanbe")
  {
    cout << "bahman" << '\n';
  }
  else
  {
    cout << "tatil" << '\n';
  }
  
  return 0;
}