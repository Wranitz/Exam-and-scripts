#include <iostream>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {
  // typedef = reserved key words used to create an
  // additional name (allias) for another data type.
  // New identifier for an existing type
  // helps with readability and reduces typos\
  // Replaced with 'using' keyword(works better in templates)

  text_t firstName = "Bro";
  number_t age = 21;

  std::cout << firstName << '\n';
  std::cout << age << '\n';
  return 0;
}
