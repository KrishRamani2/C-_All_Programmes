#include <iostream>
using namespace std;
enum day {mon,tue,wed,thu=10,fri,sat,sun};
int main()
{
  day d;
  d=sun;
  cout<<d;
  return 0;
}  