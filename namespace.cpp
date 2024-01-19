#include <iostream>

namespace first {
int x = 1;
}

namespace second {
int x = 2;
}

int main() {
  using namespace first;

  // Namespace = Provides a soluction for preventing
  // name conflicts in large projects.Each entity needs
  // a unique name. Anamespace allows for identically named
  // entities as long as the namespaces are different.

  std::cout << x << std::endl;

  return 0;
}
