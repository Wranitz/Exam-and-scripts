#include <iostream>
using namespace std;

class Encaps {
private:
  // Declaring x as private to hide it from outside
  int x;

public:
  // setData() function to set the value of x
  void setData(int m) { x = m; }

  // getData() function to return the value of x
  int getData() { return x; }
};

int main() {
  Encaps e1;

  e1.setData(10);

  cout << e1.getData() << '\n';
  return 0;
}
