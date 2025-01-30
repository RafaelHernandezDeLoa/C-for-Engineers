// Rafael Hernandez's Project 10 Mandatory 4/19/2022
#include <iostream>
using namespace std;
int main()
{
  int i1 = 100;
  int i2 = 500;
  double d1 = 3.1415;
  double d2 = 495.9876;
  int * iPtr = &i1;
  double * dPtr = &d1;
  
  cout << "(a) value of pointers printed out: int pointer: " << iPtr << " double pointer: " << dPtr << endl;
  cout << "(b) addresses of first double and int pointers: int pointer: " << &i1 << " double pointer: " << &d1 << endl;
  cout << "(c) values of first double and int (directly): int: " << i1 << " double: " << d1 << endl;
  cout << "(d) values of the same two varibles (indirectly): int: " << *iPtr << " double: " << *dPtr << endl;
  cout << "(e) changing the value of two varibles (indirectly) and printed for prove (directly): int: ";
  *iPtr = 105;
  cout << *iPtr << " double: ";
  *dPtr = 505;
  cout << *dPtr << endl;
  cout << "(f) values of the second two varibles (directly): int: " << i2 << " double: " << d2 << endl;
  iPtr = &i2;
  dPtr = &d2;
  cout << "(g) addresses of the pointers pointing to these new varibles (indirectly): int: " << iPtr << "double: " << dPtr << endl;
  cout << "values of these new variables from the pointers (indirectly): int: " << *iPtr << " double: " << *dPtr << endl;
  
  return 0;
}
