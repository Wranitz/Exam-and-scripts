#include <iostream>
#include <string>

using namespace std;

int main() {

  string name;
  int age;

  cout << "what's your name?" << '\n';
  getline(cin >> ws, name);

  cout << "Whats your age?" << '\n';
  cin >> age;

  cout << "Hello " << name << "." << '\n';
  cout << "Your are " << age << " years old." << '\n';
  return 0;
}
