#include <iostream>
using namespace std;

class Abs {
private:
  // variables made private
  int x, y, z;

public:
  void Add(int a, int b) {
    x = a;
    y = b;
    z = x + y;
    cout << "Addition of the two number is:" << z << endl;
  }
};

class game {
private:
  int i, j;

public:
  void mult(int a, int b) {
    i = a;
    j = b;
    std::cout << "Multiple of two number is:" << a * b << endl;
  }
};

int main() {
  Abs s;
  game n;
  s.Add(5, 10);
  n.mult(5, 10);
  return 0;
}
