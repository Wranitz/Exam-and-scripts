#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double x = 3.16;
  double y = 4;
  double z;

  // z = max(x, y);
  // z = min(x, y);
  // z = pow(2, 3);
  // z = sqrt(9);
  // z = abs(-3);
  // z = round(x);
  z = ceil(x);
  // z = floor(x);

  cout << "Result is " << z << '\n';

  return 0;
}
