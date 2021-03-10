#include <iostream>
#include "b.h"
#include "c.h"
using namespace std;

int main()
{ int n = get_number(12);
  int m = get_number("a");
  cout << "The numbers are: " << n << " " << m << "." << endl;
  return 0;
}
