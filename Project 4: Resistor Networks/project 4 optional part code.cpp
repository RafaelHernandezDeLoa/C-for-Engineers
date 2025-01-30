// Rafael Hernandez's Project 4 Optional 5/10/2022
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double d1;
  int i1;
  double result = 1.0;

  cout << "Enter a double: ";
  cin >> d1;

  cout << "Enter an integer: ";
  cin >> i1;

  if (i1 == 0)
  {
  }
  else
  {
    for (int i2 = 1; i2 <= abs(i1); i2++)
    {
      result *= d1;
    }

    if (i1 < 0)
    {
      result = 1/result;
    }
  }
  
  cout << "Result: " << result;
  
  return 0;
}
